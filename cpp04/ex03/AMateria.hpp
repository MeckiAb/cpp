/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:16:51 by labderra          #+#    #+#             */
/*   Updated: 2025/07/22 10:58:48 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
private:
protected:
	const std::string& _type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & copy);
	virtual ~AMateria() = 0;
	virtual AMateria& operator=(AMateria const & copy) = 0;

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif