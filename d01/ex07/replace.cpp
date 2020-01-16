/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 20:28:09 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 21:11:46 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		filename = av[1];
		std::string		s1 = av[2];
		std::string		s2 = av[3];

		std::ifstream file_exist(filename);
		if (!file_exist)
		{
			std::cout << filename << " does not exist" << std::endl;
			return (-1);
		}
		std::ofstream output_file(filename + ".replace");
		if (!output_file)
			return (-2);
		std::string		tmp;
		while (std::getline(file_exist, tmp))
		{
			for (size_t i = tmp.find(s1); i != std::string::npos; i = tmp.find(s1, i))
				tmp.replace(i, s1.length(), s2);
			output_file << tmp <<std::endl;
		}
	}
	else
	{
		std::cout << "please type again!" << std::endl;
		std::cout << "usage : ./replace [filename] str1 str2" << std::endl;
	}
	return (0);
}

