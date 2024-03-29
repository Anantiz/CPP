/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurban <aurban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:55:16 by aurban            #+#    #+#             */
/*   Updated: 2024/02/20 13:38:53 by aurban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	Zombie *z1 = newZombie(std::string("Harambe"));
	z1->announce();
	delete z1;

	randomChump(std::string("Donald Trump"));
	randomChump(std::string("Joe Biden"));
	return (0);
}