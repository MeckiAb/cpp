/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:56:35 by labderra          #+#    #+#             */
/*   Updated: 2025/07/28 10:23:02 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include "ICharacter.hpp"

# define MAX_TILES 5

class Character : public ICharacter
{
private:
	AMateria*			_inventory[4];
	std::string			_name;
	AMateria*			_floor[MAX_TILES];
public:
	Character();
	Character(std::string name);
	~Character();
	Character(Character const & copy);
	Character& operator=(Character const & copy);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif