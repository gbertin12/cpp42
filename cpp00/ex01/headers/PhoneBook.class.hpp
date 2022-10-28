/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:30:03 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/28 12:01:28 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.class.hpp"

class PhoneBook {
	
	public:
	
	PhoneBook(void);
	~PhoneBook(void);
	
	void	add(void);
	void	show_contact(void) const;
	void	search_contact(void) const;
	void	start_msg(void) const;
	bool	empty_string (std::string str) const; 
	void	print_in_tab(std::string s) const;
	void	print_contact_info(int index) const;
	int		getNbContact() const;
	
	private:
	
	Contact	_contacts[8];
	int		_nb_contact;
	int		_older;
};

#endif