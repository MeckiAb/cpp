/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:37:45 by labderra          #+#    #+#             */
/*   Updated: 2024/12/10 12:16:36 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {

	if (argc != 4){
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string		s1 = argv[2];
	if (s1.empty()) {
		std::cerr << "Empty search string" << std::endl;
		return (1);
	}
	std::string		s2 = argv[3];
	std::string		filename(argv[1]);
	std::string		full_text;

	std::ifstream	input(filename.c_str(), std::ifstream::in);
	if (!input.is_open()) {
		std::cerr << "Error opening input file" << std::endl;
		return (1);
	}
	char			c;
	while (input.get(c))
    	full_text.append(1, c);
	input.close();

	std::size_t found = full_text.find(s1);
	while (found != std::string::npos) {
		full_text.erase(found, s1.length());
		full_text.insert(found, s2);
		found = full_text.find(s1, found + s2.length());
	}
	
	std::ofstream	output(filename.append(".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!output.is_open()) {
		std::cerr << "Error opening output file" << std::endl;
		return (1);
	}
	output << full_text;
	output.close();
	return (0);
}