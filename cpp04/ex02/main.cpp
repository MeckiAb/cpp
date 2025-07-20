/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:21:43 by labderra          #+#    #+#             */
/*   Updated: 2025/07/20 14:03:52 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

	std::cout << "\nANIMAL CLASS - CONSTRUCTORS" << std::endl;
	//const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	//std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "\nANIMAL CLASS - SOUNDS" << std::endl;
	//meta->makeSound();
	j->makeSound();
	i->makeSound();

	//meta->think(7);
	j->think(5);
	i->think(24);

	std::cout << "\nANIMAL CLASS - DESTRUCTORS" << std::endl;
	//delete meta;
	delete j;
	delete i;

	return 0;
}