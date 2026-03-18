/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:42:12 by labderra          #+#    #+#             */
/*   Updated: 2026/03/15 19:31:02 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat Antonio(1);
        std::cout << Antonio.getName() << " has grade " << Antonio.getGrade() << std::endl;
        const Bureaucrat Benito("Benito");
        std::cout << Benito.getName() << " has grade " << Benito.getGrade() << std::endl;
        Bureaucrat Carlos(Benito);
        std::cout << Carlos.getName() << " has grade " << Carlos.getGrade() << std::endl;
        Bureaucrat David = Antonio;
        std::cout << David.getName() << " has grade " << David.getGrade() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat Elena(160); // This should throw an exception
        std::cout << Elena.getName() << " has grade " << Elena.getGrade() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat Francisco(0);
        std::cout << Francisco.getName() << " has grade " << Francisco.getGrade() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat Gloria("Gloria", 150);
        std::cout << Gloria.getName() << " has grade " << Gloria.getGrade() << std::endl;
        Gloria.decrementGrade(); // This should throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat Hector("Hector", 1);
        std::cout << Hector.getName() << " has grade " << Hector.getGrade() << std::endl;
        Hector.incrementGrade(); // This should throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
   
    try {
        Bureaucrat Isabel("Isabel", 75);
        std::cout << Isabel << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}