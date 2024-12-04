/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:38:31 by labderra          #+#    #+#             */
/*   Updated: 2024/12/04 19:54:02 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(int argc, char **argv){
	Zombie	*braindead;

	if (argc != 2)
		return (1);
	braindead = newZombie(argv[1]);
	braindead->announce();
	delete braindead;
	
	randomChump(argv[1]);
	
	return (0);
}