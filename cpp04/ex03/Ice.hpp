/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:35:02 by labderra          #+#    #+#             */
/*   Updated: 2025/07/25 10:57:00 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
private:
	const std::string& _type;
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