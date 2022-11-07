/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 16:38:00 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include "Brain.hpp"
#include <iostream>

class Brain {

	public:

	Brain(void);
	~Brain(void);
	Brain(const Brain& obj);
	Brain& operator=(const Brain& rhs);

	void		addIdea(std::string idea);
	int			getIndex(void);
	std::string getIdeaById(int id);
	
	private:
	
	std::string _ideas[100];
	int			_index;

};

#endif