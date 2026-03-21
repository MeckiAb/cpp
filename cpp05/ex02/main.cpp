/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:42:12 by labderra          #+#    #+#             */
/*   Updated: 2026/03/21 22:00:41 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    try {
        Bureaucrat bc("Antonio Funcionario", 1);
        ShrubberyCreationForm shrubbery("home");
        PresidentialPardonForm pardon("Criminal Peligroso");
        RobotomyRequestForm robotomy("Bing Bong");

        std::cout << bc << std::endl;
        std::cout << shrubbery << std::endl;
        std::cout << pardon << std::endl;
        std::cout << robotomy << std::endl;

        bc.signForm(shrubbery);
        bc.signForm(pardon);
        bc.signForm(robotomy);

        bc.executeForm(shrubbery);
        bc.executeForm(pardon);
        bc.executeForm(robotomy);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}