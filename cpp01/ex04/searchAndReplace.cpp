/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchAndReplace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 01:59:00 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/16 10:54:03 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	searchAndReplace(std::string occurence, std::string s1, std::string s2)
{
	std::string::size_type	index;
	
	index = occurence.find(s1, 0);
	if (!s1.empty())
	{
		while (index != std::string::npos)
		{
			occurence.erase(index, s1.length());
			occurence.insert(index, s2);
			index = occurence.find(s1, index + s2.size());
		}
	}
	return (occurence);
}