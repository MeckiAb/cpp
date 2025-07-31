/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:21:43 by labderra          #+#    #+#             */
/*   Updated: 2025/07/31 15:29:05 by labderra         ###   ########.fr       */
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
	const AAnimal* zoo[10];
	for (int i = 0; i < 5; i++) {
		zoo[i] = new Dog();
	}
	for (int i = 5; i < 10; i++) {
		zoo[i] = new Cat();
	}

	std::cout << "\nANIMAL CLASS - SOUNDS & IDEAS" << std::endl;
	for (int i = 0; i < 10; i++) {
		zoo[i]->makeSound();
	}
	for (int i = 0; i < 10; i++) {
		zoo[i]->think(i * i);
	}

	std::cout << "\nANIMAL CLASS - DESTRUCTORS" << std::endl;
	for (int i = 0; i < 10; i++) {
		delete (zoo[i]);
	}

	return 0;
}
