/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:42:12 by labderra          #+#    #+#             */
/*   Updated: 2026/03/15 23:28:23 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    Bureaucrat St("el firmas", 97);
	Form pilot("titulo de avioneta finladesa", 96, 2);
	Bureaucrat St2("manolos");
	
	St2.signForm(pilot);
	St2.incrementGrade();
	St2.signForm(pilot);
	std::cout << pilot << St2 << std::endl;
    std::cout << St2 << std::endl;
    return 0;
}