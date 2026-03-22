/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:15:35 by labderra          #+#    #+#             */
/*   Updated: 2026/03/21 19:52:39 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Anonymous"), grade(150) {
    std::cout << "Base Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name) : name(name), grade(150) {
    std::cout << "Name Bureaucrat created" << std::endl;
};

Bureaucrat::Bureaucrat(int grade) : name("Anonymous") {
    std::cout << "Grade Bureaucrat created" << std::endl;
    try {
        this->setGrade(grade);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
};

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
    std::cout << "Full Bureaucrat created" << std::endl;
    try {
        this->setGrade(grade);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
};

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade){
    std::cout << "Bureaucrat copy created" << std::endl;
};

Bureaucrat::~Bureaucrat() {
};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy ) {
    if (this != &copy) {
        static_cast<std::string>(name) = copy.getName();
        grade = copy.getGrade();
    }
    return *this;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc) {
    os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << std::flush;
    return os;
};

const std::string	Bureaucrat::getName() const {
    return this->name;
};

int					Bureaucrat::getGrade() const {
    return this->grade;
};

void				Bureaucrat::setGrade(int grade) {
    if (grade < 1) {
        throw(Bureaucrat::GradeTooHighException());
    }
    else if (grade > 150) {
        throw(Bureaucrat::GradeTooLowException());
    }
    else {
        this->grade = grade;
    }
};

void				Bureaucrat::incrementGrade() {
    this->setGrade(this->grade - 1);
};

void				Bureaucrat::decrementGrade() {
    this->setGrade(this->grade + 1);
};

void                Bureaucrat::signForm(AForm& form) {
    if (form.getIsSigned()) {
        std::cout << *this << " couldn't sign " << form << "because it's already signed." << std::endl;
        return;
    }
    try {
        form.beSigned(*this);
        std::cout << *this << " signed " << form << std::endl;
    } catch (const std::exception& e) {
        std::cout << *this << " couldn't sign " << form << " because " << e.what() << std::endl;
    }
};

void                Bureaucrat::executeForm(const AForm& form) const {
    if (!form.getIsSigned()) {
        std::cout << *this << " couldn't execute " << form << " because it's not signed." << std::endl;
        return;
    }
    try {
        form.execute(*this);
        std::cout << *this << " executed " << form << std::endl;
    } catch (const std::exception& e) {
        std::cout << *this << " couldn't execute " << form << " because " << e.what() << std::endl;
    }
};

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too High";
};

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too Low";
};