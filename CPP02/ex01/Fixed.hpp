/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurban <aurban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:40:23 by aurban            #+#    #+#             */
/*   Updated: 2024/04/11 11:32:19 by aurban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value	);
	~Fixed();
	Fixed(const Fixed &src);

	Fixed &operator=(const Fixed &src);


	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os,const Fixed& n);
