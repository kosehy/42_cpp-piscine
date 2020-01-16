/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:30:35 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 22:46:25 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <istream>

// rdbuf doc
// https://www.geeksforgeeks.org/io-redirection-c/
// stream_object.rdbuf(): Returns pointer to the stream buffer of stream_object
void	print_stream(std::istream &str)
{
	std::cout << str.rdbuf();
}

int		main(int ac, char **av)
{
	if (ac == 1 || (ac == 2 && std::string(av[1]).compare("--") == 0))
	{
		print_stream(std::cin);
		return (0);
	}

	for (int i = 1; i < ac; ++i)
	{
		std::string	arg = av[i];
		if (i == 1 && arg.compare("--") == 0)
			continue ;

		if (arg.compare("-") == 0)
			print_stream(std::cin);
		else {
			std::ifstream fs(arg);
			if (fs.good())
				print_stream(fs);
			else {
				// strerror(): returns a pointer to the textual representation of the current errno value.
				// https://www.geeksforgeeks.org/error-handling-c-programs/
				std::cerr << av[0] << ": " << arg << ": " << strerror(errno) << std::endl;
			}
		}
	}

	return (0);
}
