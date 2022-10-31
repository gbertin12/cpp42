/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamReplace.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/30 02:05:57 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMREPLACE_H
# define STREAMREPLACE_H

#include "StreamReplace.hpp"
#include <iostream>

class StreamReplace {

	public:

	StreamReplace(std::string filename, std::string s1, std::string s2);
	~StreamReplace(void);

	void		replaceOccurance(void);
	
	private:

	std::string _filename;
	std::string _s1;
	std::string _s2;

	
};

std::string	searchAndReplace(std::string occurence, std::string s1, std::string s2);

#endif