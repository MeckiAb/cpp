/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:17:56 by labderra          #+#    #+#             */
/*   Updated: 2026/03/21 20:21:31 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), target("default") {
    std::cout << "Default Robotomy Request Form created" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy Request Form", 72, 45), target(target) {
    std::cout << "Target Robotomy Request Form created" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), target(copy.target) {
    std::cout << "Copy Robotomy Request Form created" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Robotomy Request Form destroyed" << std::endl;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    AForm::operator=(copy);
    if (this != &copy) {
        target = copy.target;
    }
    return *this;
};

void RobotomyRequestForm::formAction() const {
    std::cout << "Some drilling noises..." << std::endl;
    if (std::rand() % 2) {
        std::cout << target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Failed to robotomize " << target << "." << std::endl;
    }
};