/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:21:43 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 12:59:25 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

	std::cout << "\nANIMAL CLASS - CONSTRUCTORS" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "\nANIMAL CLASS - SOUNDS" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\nANIMAL CLASS - DESTRUCTORS" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\nWRONG CLASS - CONSTRUCTORS" << std::endl;
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;

	std::cout << "\nWRONG CLASS - SOUNDS" << std::endl;
	k->makeSound(); //will NOT output the wrong cat sound!
	wrongmeta->makeSound();

	std::cout << "\nWRONG CLASS - DESTRUCTORS" << std::endl;
	delete wrongmeta;
	delete k;
	
	return 0;
}