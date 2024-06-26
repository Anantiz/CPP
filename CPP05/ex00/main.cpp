/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurban <aurban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 00:58:09 by aurban            #+#    #+#             */
/*   Updated: 2024/05/04 15:37:32 by aurban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	Bureaucrat	john("John", 50);

	Bureaucrat	john2(john);

	john.incrementGrade();

	std::cout << "John  grade: " << john.getGrade() << std::endl;
	std::cout << "John2 grade: " << john2.getGrade() << std::endl;

	try {
		Bureaucrat	fucker("Fucker", 200);
	}catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }

	Bureaucrat fucker2("Jess-Uschris", 1);
	try {
		fucker2.incrementGrade();
	}catch (const Bureaucrat::GradeTooHighException &e)	{
        std::cout << e.what() << std::endl;
	}

	std::cout << fucker2 << std::endl;

	return 0;
}