/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:11:17 by labderra          #+#    #+#             */
/*   Updated: 2024/12/09 15:57:53 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void) {

	std::string	my_string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &my_string;
	std::string &stringREF = my_string;

	std::cout << "Memory address of the string variable : " << &my_string << std::endl;
	std::cout << "Memory address held by stringPTR      : " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF      : " << &stringREF << std::endl;

	std::cout << "Value of the string variable          : " << my_string << std::endl;
	std::cout << "Value pointed to by stringPTR         : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF         : " << stringREF << std::endl;
}