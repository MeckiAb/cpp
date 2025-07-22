/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:35:02 by labderra          #+#    #+#             */
/*   Updated: 2025/07/22 10:59:19 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
private:
	const std::string& _type;
public:
	Cure();
	Cure(std::string const & type);
	~Cure();
	Cure(AMateria const & copy);
	AMateria& operator=(AMateria const & copy);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif