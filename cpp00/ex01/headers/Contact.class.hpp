/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:30:01 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/13 22:03:32 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string.h>

class Contact {
	
	public:

	Contact();
	~Contact(void);
	
	void		set_data(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string	getPhoneNumber() const;
	std::string getDarkestSecret() const;
	
	private:
	
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string	_phoneNumber;
	std::string _darkestSecret;
};

#endif