/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:12:29 by labderra          #+#    #+#             */
/*   Updated: 2026/03/21 21:59:01 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {

private:
    std::string target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();
    
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

    void formAction() const;
};

#endif
