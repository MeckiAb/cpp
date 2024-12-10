/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:50:53 by labderra          #+#    #+#             */
/*   Updated: 2024/12/10 14:43:16 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
#include <iostream>


class Harl
{
private:
	typedef struct s_levels {
		std::string label;
		void (Harl::*func)(void);
	} t_levels;
	
	t_levels	levels[4];
	
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
public:
	Harl();
	~Harl();
	
	void complain(std::string level);
};



#endif