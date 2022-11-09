/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/30 14:14:35 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include "Harl.hpp"
#include <iostream>

class Harl {

	public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
	
	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
};

#endif