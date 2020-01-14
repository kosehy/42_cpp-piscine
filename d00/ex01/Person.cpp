/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:27:57 by sko               #+#    #+#             */
/*   Updated: 2020/01/13 21:27:58 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Person.hpp"

Person::Person() {}

bool 	Person::is_exists(void) { return (first != ""); }

void 	Person::add_info(void)
{
	std::cout << "First Name : "; std::getline(std::cin, first);
	std::cout << "Last Name : "; std::getline(std::cin, last);
	std::cout << "Nickname : "; std::getline(std::cin, nick);
	std::cout << "Login : "; std::getline(std::cin, login);
	std::cout << "Postal Address : "; std::getline(std::cin, address);
	while (true)
	{
		std::cout << "Email Address : "; std::getline(std::cin, email);
		if (email.find('@') != std::string::npos && email.find('.') != std::string::npos)
			break ;
	}
	while (true)
	{
		std::cout << "Phone Number : "; std::getline(std::cin, phone);
		if (phone.find_first_not_of("0123456789") == std::string::npos)
			break ;
	}
	do {
		std::cout << "Birth Month (MM) : ";
		if (!(std::cin >> birth_month))
		{
			std::cin.clear();
			std::cin.ignore();
		}
	}
	while (birth_month < 1 || birth_month > 12);
	do {
		std::cout << "Birth Day (DD) : ";
		if (!(std::cin >> birth_day))
		{
			std::cin.clear();
			std::cin.ignore();
		}
	}
	while (birth_day < 1 || birth_day > 31);
	do {
		std::cout << "Birth Year (YY) : ";
		if (!(std::cin >> birth_year))
		{
			std::cin.clear();
			std::cin.ignore();
		}
	}
	while (birth_year < 1900 || birth_year > 2020);
	std::cout << "Favorite Food : "; std::getline(std::cin, food);
	std::cout << "Underwear Color : "; std::getline(std::cin, underwear_color);
	std::cout << "Darkest Secret : "; std::getline(std::cin, secret);
}

std::string fix_width(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void	Person::show_index(int i)
{
	std::cout << std::internal << std::setfill(' ') << std::setw(10) << i << "|";
	std::cout << std::internal << std::setfill(' ') << std::setw(10) << fix_width(first) << "|";
	std::cout << std::internal << std::setfill(' ') << std::setw(10) << fix_width(last) << "|";
	std::cout << std::internal << std::setfill(' ') << std::setw(10) << fix_width(nick) << "|" << std::endl;
}

void	Person::show_person(void)
{
	std::cout << "First Name: " << first << std::endl;
	std::cout << "Last Name: " << last << std::endl;
	std::cout << "Nick Name: " << nick << std::endl;
	std::cout << "Login : " << login << std::endl;
	std::cout << "Address : " << address << std::endl;
	std::cout << "Email : " << email << std::endl;
	std::cout << "Phone : " << phone << std::endl;
	std::cout << "Birthday : " << birth_month << "." << birth_day << "." << birth_year << std::endl;
	std::cout << "Favorite Food : " << food << std::endl;
	std::cout << "Underwear Color : " << underwear_color << std::endl;
	std::cout << "Darkest Secret : " << secret << std::endl;
}