/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 12:06:57 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>


class Animal
{
protected:
	std::string	type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& a);
	Animal&	operator=(const Animal& a);
	
	virtual void makeSound(void) const;
	std::string	getType(void) const;
};

#endif