/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:07:18 by labderra          #+#    #+#             */
/*   Updated: 2025/07/20 12:51:17 by labderra         ###   ########.fr       */
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

	std::string getIdea(const int i) const;
	void setIdea(const int i, const std::string);
};

#endif