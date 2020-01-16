/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:30:04 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 16:32:49 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strPtr = &str;
	std::string		&strRef = str;

	std::cout << "pointer : " << *strPtr << std::endl;
	std::cout << "reference : " << strRef << std::endl;
	return (0);
}

