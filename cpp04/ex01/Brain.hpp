/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:07:18 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 12:22:53 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
	
public:
	Brain();
	~Brain();
	Brain(Brain& b);
	Brain&	operator=(const Brain& b);

	std::string& operator[](const int i);
	const std::string& operator[](const int i) const;
};

#endif