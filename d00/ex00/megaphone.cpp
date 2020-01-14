/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:21:36 by sko               #+#    #+#             */
/*   Updated: 2020/01/13 20:25:53 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_toupper(char *str)
{
	int		i;
	char	c;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - 32;
		else
			c = str[i];
		std::cout << c;
	}
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[++i])
		print_toupper(av[i]);
	std::cout << std::endl;

	return (0);
}
