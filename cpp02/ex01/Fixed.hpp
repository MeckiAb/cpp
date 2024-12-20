/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:17:37 by labderra          #+#    #+#             */
/*   Updated: 2024/12/20 13:47:50 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>
# include <sstream>
# include <string>

class Fixed
{
private:
	int	value;
	enum {fraction = 8};

public:

	Fixed();
	Fixed( const Fixed& f );
	Fixed( const int n );
	Fixed( const float f );
	Fixed& operator=( const Fixed& f );
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	float toFloat( void ) const; 
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif