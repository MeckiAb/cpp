/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 21:57:27 by labderra          #+#    #+#             */
/*   Updated: 2026/03/15 23:38:13 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("blank_form"), _gradeToSign(150), _gradeToExecute(150), _isSigned(false) {
    std::cout << "Base Form created" << std::endl;
};

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false) {
    std::cout << "Full Form created" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    }
    else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }
};
    
Form::Form(const Form &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _isSigned(copy._isSigned) {
    std::cout << "Copy Form created" << std::endl;
    if (copy._gradeToSign < 1 || copy._gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    }
    else if (copy._gradeToSign > 150 || copy._gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }
};

Form::~Form() {
    std::cout << "Form destroyed" << std::endl;
};
    
Form& Form::operator=(const Form& copy) {
    std::cout << "Impossible to assign constant values" << std::endl;
    if (this != &copy) {
        _isSigned = copy.getIsSigned();
    }
    return *this;
};

std::string	Form::getName() const {
    return _name;
};

int	Form::getGradeToSign() const {
    return _gradeToSign;
};

int	Form::getGradeToExecute() const {
    return _gradeToExecute;
};

bool	Form::getIsSigned() const {
    return _isSigned;
};

void    Form::beSigned(const Bureaucrat &bc) {
    if (bc.getGrade() > this->getGradeToSign()) {
        throw Form::GradeTooLowException();
    } else {
        _isSigned = true;
    }
};
    
const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too High";
};

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too Low";
};

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << form.getName() << ": Grade " << form.getGradeToSign() << " to sign, grade " << form.getGradeToExecute() << " to execute, " << (form.getIsSigned() ? "signed" : "unsigned") << std::flush;
    return os;
};
