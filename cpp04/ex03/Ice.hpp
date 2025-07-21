/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:35:02 by labderra          #+#    #+#             */
/*   Updated: 2025/07/21 11:54:28 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
private:
	std::string& _type;
	Ice();
public:
	Ice(std::string const & type);
	~Ice();
};

#endif