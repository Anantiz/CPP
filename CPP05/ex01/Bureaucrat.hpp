/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurban <aurban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 00:40:22 by aurban            #+#    #+#             */
/*   Updated: 2024/05/04 17:16:54 by aurban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		std::string const	_name;
		int 				_grade;

		Bureaucrat() {} // Not allowed, it makes no sense to construct without a name
		Bureaucrat &operator=(const Bureaucrat &right); // Not allowed, cannot reassign _name

	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &right);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		class GradeTooHighException : std::exception
		{
			public:
				virtual const char *what() const \
				_GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW { return ("Grade too high");}
		};

		class GradeTooLowException : std::exception
		{
			public:
				virtual const char *what() const \
				_GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW { return ("Grade too low");}
		};

		void signForm( Form &form) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& right);

