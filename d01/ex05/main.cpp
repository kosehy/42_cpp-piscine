/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:54:35 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 16:54:36 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int 	main()
{
	Human	ali;

	std::cout << ali.identify() << std::endl;
	std::cout << ali.getBrain().identify() << std::endl;
}
