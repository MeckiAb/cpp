/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:12:29 by labderra          #+#    #+#             */
/*   Updated: 2026/03/21 20:17:40 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonFORM_H
#define PresidentialPardonFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    ~PresidentialPardonForm();
    
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

    void formAction() const;
};

#endif
