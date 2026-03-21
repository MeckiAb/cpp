/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 21:57:27 by labderra          #+#    #+#             */
/*   Updated: 2026/03/21 19:27:02 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("blank_AForm"), _gradeToSign(150), _gradeToExecute(150), _isSigned(false) {
    std::cout << "Base AForm created" << std::endl;
};

AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false) {
    std::cout << "Full AForm created" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw AForm::GradeTooHighException();
    }
    else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw AForm::GradeTooLowException();
    }
};
    
AForm::AForm(const AForm &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _isSigned(copy._isSigned) {
    std::cout << "Copy AForm created" << std::endl;
    if (copy._gradeToSign < 1 || copy._gradeToExecute < 1) {
        throw AForm::GradeTooHighException();
    }
    else if (copy._gradeToSign > 150 || copy._gradeToExecute > 150) {
        throw AForm::GradeTooLowException();
    }
};

AForm::~AForm() {
    std::cout << "AForm destroyed" << std::endl;
};
    
AForm& AForm::operator=(const AForm& copy) {
    std::cout << "Impossible to assign constant values" << std::endl;
    if (this != &copy) {
        _isSigned = copy.getIsSigned();
    }
    return *this;
};

std::string	AForm::getName() const {
    return _name;
};

int	AForm::getGradeToSign() const {
    return _gradeToSign;
};

int	AForm::getGradeToExecute() const {
    return _gradeToExecute;
};

bool	AForm::getIsSigned() const {
    return _isSigned;
};

void    AForm::beSigned(const Bureaucrat &bc) {
    if (bc.getGrade() > this->getGradeToSign()) {
        throw AForm::GradeTooLowException();
    } else {
        _isSigned = true;
    }
};

void    AForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw(GradeTooLowException());
    } else {
        this->formAction();
    }    
}
    
const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade too High";
};

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade too Low";
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
    os << AForm.getName() << ": Grade " << AForm.getGradeToSign() << " to sign, grade " << AForm.getGradeToExecute() << " to execute, " << (AForm.getIsSigned() ? "signed" : "unsigned") << std::flush;
    return os;
};
