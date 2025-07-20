/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/20 13:50:09 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H
# include <iostream>


class AAnimal
{
protected:
	std::string	type;

public:
	AAnimal();
	virtual ~AAnimal() = 0;
	AAnimal(const AAnimal& a);
	AAnimal&	operator=(const AAnimal& a);
	
	virtual void makeSound(void) const = 0;
	virtual void think(const int i) const = 0;
	std::string	getType(void) const;
};

#endif