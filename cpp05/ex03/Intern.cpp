/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 10:05:10 by labderra          #+#    #+#             */
/*   Updated: 2026/03/22 10:44:18 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern created" << std::endl;
};

Intern::Intern(const Intern& copy) {
    std::cout << "Intern copy created" << std::endl;
    *this = copy;
};

Intern::~Intern() {
    std::cout << "Intern destroyed" << std::endl;
};

Intern& Intern::operator=(const Intern& copy) {
    std::cout << "Intern assigned" << std::endl;
    (void)copy;
    return *this;
};

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

    for (int i = 0; i < 3; i++) {
        if (formName != formNames[i]) {
            delete forms[i];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formName << " form" << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << formName << " form" << std::endl;
    return (NULL);
};