/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:37 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 13:15:01 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*	Class Contact
---------------------*/

class Contact {

public:
	Contact();
	Contact(std::string _first_name, std::string _last_name, std::string _nickname,
		std::string _phone_number, std::string _darkest_secret);
	~Contact(void);
	
	void	setFirstName(std::string s); 
	void	setLastName(std::string s); 
	void	setNickname(std::string s); 
	void	setPhoneNumber(std::string s); 
	void	setDarkestSecret(std::string s); 
	
	std::string& getFirstName(void); 
	std::string& getLastName(void); 
	std::string& getNickname(void); 
	std::string& getPhoneNumber(void); 
	std::string& getDarkestSecret(void); 
	
private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;
};
