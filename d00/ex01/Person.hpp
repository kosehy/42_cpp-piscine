/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:52:21 by sko               #+#    #+#             */
/*   Updated: 2020/01/13 21:16:40 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>

class	Person
{
	private:
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	login;
		std::string	address;
		std::string	email;
		std::string	phone;
		int			birth_month;
		int			birth_day;
		int			birth_year;
		std::string	food;
		std::string	underwear_color;
		std::string	secret;
	public:
		Person();
		bool	is_exists(void);
		void	add_info(void);
		void	show_index(int);
		void	show_person(void);
};

#endif
