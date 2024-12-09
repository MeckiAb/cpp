/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 07:29:07 by labderra          #+#    #+#             */
/*   Updated: 2024/12/09 22:39:18 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie 	*zombieHorde(int N, std::string name) {
	
	Zombie *horde = new Zombie [N];
	
	while (N--)
		horde[N].set_name(name);
	
	return (horde);
}
