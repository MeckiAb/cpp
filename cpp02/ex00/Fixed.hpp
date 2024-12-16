/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:17:37 by labderra          #+#    #+#             */
/*   Updated: 2024/12/16 20:37:22 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
private:
	int	value;
	enum {fraction = 8};

public:

	Fixed();
	Fixed(const Fixed& f);
	Fixed& operator=(const Fixed& f);
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
};

#endif