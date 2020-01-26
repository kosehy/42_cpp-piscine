/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 12:04:39 by sko               #+#    #+#             */
/*   Updated: 2020/01/25 12:04:40 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Gkrellm.hpp>

int		input_error(void)
{
	std::cout << "You must enter a valid mode for ft_gkrellm" << std::endl <<
			  "If you enter any modules they must be valid (no module specified will launch all modules)" << std::endl <<
			  "Any defined modules will be defined in the order they're put" << std::endl <<
			  "USAGE: 	ft_gkrellm [MODE] [MODULES]" << std::endl <<
			  "-g 		enables graphic mode" << std::endl <<
			  "-t 		enables text mode" << std::endl << std::endl <<
			  "-h 		enables host module" << std::endl <<
			  "-o 		enables os info module" << std::endl <<
			  "-d 		enables date & time module" << std::endl <<
			  "-c 		enables cpu info module" << std::endl <<
			  "-u 		enables cpu usage module" << std::endl <<
			  "-r 		enables ram usage module" << std::endl <<
			  "-n 		enables network info module" << std::endl <<
			  "-p 		enables magical pony module" << std::endl;

	return (0);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		return (input_error());

	if (strcmp(av[1], "-t") && strcmp(av[1], "-g"))
		return (input_error());

	srand(time(0));

	std::string	input[] =
	{
		"-h", "-o", "-d", "-c", "-u", "-r", "-n"
	};

	std::vector<std::string>	flags;
	std::stringstream			v;
	int		i = 2;
	int		x = 0;

	while (i < ac)
	{
		while (x < 8)
		{
			if (av[i] == input[x])
				flags.push_back(av[i]);
			++x;
		}
		x = 0;
		try {
			v << flags.at(i - 2);
		}
		catch (const std::exception &e)
		{
			return (input_error());
		}

	}
}