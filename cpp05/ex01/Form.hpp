/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 20:21:46 by labderra          #+#    #+#             */
/*   Updated: 2026/03/15 23:34:46 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {
    
private:
    const std::string	_name;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    bool                _isSigned;

public:
    Form();
    Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
    Form(const Form &copy);
    ~Form();
    
    Form& operator=(const Form &copy);

    std::string	getName() const;
    int	getGradeToSign() const;
    int	getGradeToExecute() const;
    bool	getIsSigned() const;
    
    void beSigned(const Bureaucrat &bc);
    
    class	GradeTooHighException: public std::exception {
        public:
		virtual const char*	what() const throw();
    };
    
	class	GradeTooLowException: public std::exception {
        public:
		virtual const char*	what() const throw();
    };

};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif