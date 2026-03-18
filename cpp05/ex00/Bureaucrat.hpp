/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 20:19:38 by labderra          #+#    #+#             */
/*   Updated: 2026/03/15 19:13:35 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat {

private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string& name);
	Bureaucrat(int grade);
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
    
	Bureaucrat	        &operator=(const Bureaucrat& copy);
    
	const std::string	getName() const;
	void				setGrade(int grade);
	int					getGrade() const;
    
	void				incrementGrade();
	void				decrementGrade();
    
	class	GradeTooHighException: public std::exception {
        public:
		virtual const char*	what() const throw();
    };
    
	class	GradeTooLowException: public std::exception {
        public:
		virtual const char*	what() const throw();
    };
    
};

std::ostream    &operator<<(std::ostream& os, const Bureaucrat& bc);

#endif