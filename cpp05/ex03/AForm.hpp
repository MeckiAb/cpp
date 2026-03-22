/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 20:21:46 by labderra          #+#    #+#             */
/*   Updated: 2026/03/22 10:38:54 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm {
    
private:
    const std::string	_name;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    bool                _isSigned;

public:
    AForm();
    AForm(const std::string &name, const int gradeToSign, const int gradeToExecute);
    AForm(const AForm &copy);
    virtual ~AForm();
    
    AForm& operator=(const AForm &copy);

    std::string	getName() const;
    int	getGradeToSign() const;
    int	getGradeToExecute() const;
    bool	getIsSigned() const;
    
    void beSigned(const Bureaucrat &bc);

	void execute(const Bureaucrat &executor) const;

    virtual void formAction() const = 0;
    
    class	GradeTooHighException: public std::exception {
        public:
		virtual const char*	what() const throw();
    };
    
	class	GradeTooLowException: public std::exception {
        public:
		virtual const char*	what() const throw();
    };

};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif