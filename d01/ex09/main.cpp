/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:40:56 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 21:40:57 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger	logger("log.txt");

	logger.log("console", "CMD mode");
	logger.log("file", "file mode");
	logger.log("console", "good!!");
}
