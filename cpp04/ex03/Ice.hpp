/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:35:02 by labderra          #+#    #+#             */
/*   Updated: 2025/07/29 10:26:01 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
private:
public:
	Ice();
	Ice(std::string const & type);
	~Ice();
	Ice(AMateria const & copy);
	AMateria& operator=(AMateria const & copy);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif