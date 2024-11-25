/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:11:48 by labderra          #+#    #+#             */
/*   Updated: 2024/11/24 19:59:41 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	std::string	line;
	int		i = 1;
	
	while (i < argc)
		line.append(argv[i++]);
	for (std::string::iterator it = line.begin(); it != line.end(); ++it)
		*it = std::toupper(*it);
	if (line.empty())
		line.append("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	std::cout << line << std::endl;
	return (0);
}
