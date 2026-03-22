/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:42:12 by labderra          #+#    #+#             */
/*   Updated: 2026/03/22 10:51:41 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
	Intern freelabour;
	AForm* form;
	form = freelabour.makeForm("presidential pardon", "Bender");
	delete form;
    form = freelabour.makeForm("robotomy request", "BizzBuzz");
    delete form;
    form = freelabour.makeForm("shrubbery creation", "home");
    delete form;
    form = freelabour.makeForm("unknown form", "target");
    delete form;
    
	return 0;
}