/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:38:31 by labderra          #+#    #+#             */
/*   Updated: 2024/12/05 13:23:12 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde(int N, std::string name);

int	main(int argc, char **argv){
	Zombie	*walkers;

	if (argc != 3)
		return (1);
	walkers = zombieHorde(argv[1]., argv[2]);

	
	return (0);
}