/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 07:27:19 by labderra          #+#    #+#             */
/*   Updated: 2024/12/09 22:38:25 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int main (void){
	int		count = 0;
	Zombie	*walkers = zombieHorde(10, "Carl");

	while (count < 10)
		walkers[count++].announce();
	count = 0;
	while (count < 10)
		walkers[count++].~Zombie();
	delete [] walkers;
	return (0);
}