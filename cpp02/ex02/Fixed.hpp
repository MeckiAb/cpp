/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:17:37 by labderra          #+#    #+#             */
/*   Updated: 2024/12/26 13:07:40 by labderra         ###   ########.fr       */
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
	
	void swap( Fixed& f);
	Fixed& operator=( Fixed f );
	
	int operator<( const Fixed& f );
	int operator>( const Fixed& f );
	int operator<=( const Fixed& f );
	int operator>=( const Fixed& f );
	int operator==( const Fixed& f );
	int operator!=( const Fixed& f );
	
	Fixed& operator+=( const Fixed& f );
	Fixed operator+( const Fixed& f );
	Fixed& operator-=( const Fixed& f );
	Fixed operator-( const Fixed& f );
	Fixed& operator*=( const Fixed& f );
	Fixed operator*( const Fixed& f );
	Fixed& operator/=( const Fixed& f );
	Fixed operator/( const Fixed& f );
	
	Fixed& operator++();
	Fixed operator++( int );
	Fixed& operator--();
	Fixed operator--( int );

	Fixed& min(Fixed& left, Fixed& right);
	static Fixed& min(const Fixed& left, const Fixed& right);
	Fixed& max(Fixed& left, Fixed& right);
	static Fixed& max(const Fixed& left, const Fixed& right);
	
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	float toFloat( void ) const; 
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif