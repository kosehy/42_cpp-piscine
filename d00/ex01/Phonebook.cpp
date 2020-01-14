/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:52:53 by sko               #+#    #+#             */
/*   Updated: 2020/01/13 21:07:40 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Person.hpp"

void	display_index(Person person[8])
{
	int	i;

	i = 0;
	std::cout << "     Index|First Name|Last Name |Nick Name|" << std::endl;
	while (i < 8 && person[i].is_exists())
	{
		person[i].show_index(i);
		++i;
	}
}

int 	get_index(Person person[8])
{
	int choice;

	choice = -1;
	do {
		std::cout << "Index Search: ";
		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore();
			choice = -1;
		}
	} while (choice < 0 || choice > 7 || !person[choice].is_exists());
	return (choice);
}

int		main(void)
{
	std::string input;
	Person		person[8];
	int 		i;

	i = 0;
	std::cout << "Type ADD | SEARCH | EXIT" << std::endl;
	std::cout << "Other command will not be accepted!" << std::endl;
	do {
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			person[i].add_info();
			i += (i == 7 ? -7 : 1);
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (person[0].is_exists())
			{
				display_index(person);
				person[get_index(person)].show_person();
			} else
				std::cout << "The phonebook is empty" << std::endl;
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Close!..." << std::endl;
			return (0);
		}
		else
		{
			std::cout << "Type correct Command!!!" << std::endl;
		}
		std::cout << "You entered: [" << input << "]" << std::endl;
	} while (input.compare("EXIT"));
	std::cout << "Close!..." << std::endl;
	return (0);
}
