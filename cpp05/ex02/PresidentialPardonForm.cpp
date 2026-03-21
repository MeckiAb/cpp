/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:17:56 by labderra          #+#    #+#             */
/*   Updated: 2026/03/21 20:21:31 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 72, 45), target("default") {
    std::cout << "Default Presidential Pardon Form created" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("Presidential Pardon Form", 25, 5), target(target) {
    std::cout << "Target Presidential Pardon Form created" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), target(copy.target) {
    std::cout << "Copy Presidential Pardon Form created" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Presidential Pardon Form destroyed" << std::endl;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    AForm::operator=(copy);
    if (this != &copy) {
        target = copy.target;
    }
    return *this;
};

void PresidentialPardonForm::formAction() const {
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
};