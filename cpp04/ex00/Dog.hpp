/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 18:37:51 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
protected:
	
public:
	Dog();
	~Dog();
	Dog(const Dog& a);
	Dog&	operator=(const Dog& a);
	
	void makeSound(void) const;
};

#endif