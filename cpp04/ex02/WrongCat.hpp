/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 10:45:43 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
protected:
	
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& a);
	WrongCat&	operator=(const WrongCat& a);

	void makeSound(void) const;
};

#endif