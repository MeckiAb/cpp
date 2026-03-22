/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:02:55 by labderra          #+#    #+#             */
/*   Updated: 2026/03/21 21:57:43 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream> 

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), target("default") {
    std::cout << "Default Shrubbery Creation Form created" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery Creation Form", 145, 137), target(target) {
    std::cout << "Target Shrubbery Creation Form created" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), target(copy.target) {
    std::cout << "Copy Shrubbery Creation Form created" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Shrubbery Creation Form destroyed" << std::endl;
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    AForm::operator=(copy);
    if (this != &copy) {
        target = copy.target;
    }
    return *this;
};

void ShrubberyCreationForm::formAction() const {
    std::string filename = target + "_shrubbery";
    std::ofstream file(filename.c_str());
    if (file.is_open()) {
        file << "  $" << "\n";
        file << " $$$" << "\n";
        file << "$$$$$" << "\n";
        file << "  I" << std::endl;
        file.close();
    } else {
        std::cerr << "Unable to open file: " << target + "_shrubbery" << std::endl;
    }
};