/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/20 13:07:42 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
private:
	Brain* _dogBrain;
public:
	Dog();
	~Dog();
	Dog(const Dog& a);
	Dog&	operator=(const Dog& a);
	
	void makeSound(void) const;
	void think(const int i) const;
};

#endif