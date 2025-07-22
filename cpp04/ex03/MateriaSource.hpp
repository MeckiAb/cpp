/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:07:21 by labderra          #+#    #+#             */
/*   Updated: 2025/07/22 10:21:10 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* library[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & copy);
	MateriaSource& operator=(MateriaSource const & copy);
	~MateriaSource();
	
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif