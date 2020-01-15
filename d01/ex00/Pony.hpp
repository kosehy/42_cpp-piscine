/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:03:16 by sko               #+#    #+#             */
/*   Updated: 2020/01/14 23:03:40 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONH_HPP

#include <iostream>
#include <string>

class Pony
{
	private:
		std::string		_name;
		std::string		_type;

	public:
		Pony(std::string name, std::string type);
		~Pony(void);

		void	type(void);
};

#endif
