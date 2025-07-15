/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:40:52 by labderra          #+#    #+#             */
/*   Updated: 2025/07/14 21:03:12 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool	_gateKeeperMode;
    
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap& c);
	ScavTrap& operator=(const ScavTrap& c);
	~ScavTrap();
    
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate();
};

#endif