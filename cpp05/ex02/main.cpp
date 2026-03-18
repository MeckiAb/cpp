/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:42:12 by labderra          #+#    #+#             */
/*   Updated: 2026/03/18 19:26:14 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    Bureaucrat Antonio("Antonio", 101);
	Form licencia("Licencia de Obras", 100, 150);
	Bureaucrat Benito("Benito");
	
    std::cout << Antonio << std::endl;
	Antonio.signForm(licencia);
	Antonio.incrementGrade();
	Antonio.signForm(licencia);
	std::cout << licencia << Antonio << std::endl;
    std::cout << Benito << std::endl;
    return 0;
}