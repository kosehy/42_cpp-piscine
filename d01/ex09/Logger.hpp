/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:42:07 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 21:42:08 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <ctime>
# include <iomanip>

class Logger
{
private:
	void 		logToConsole(std::string const &message);
	void		logToFile(std::string const &message);
	std::string	makeLogEntry(std::string const &message) const;
	std::string	_file;
public:
	Logger(std::string file);
	~Logger(void);
	void		log(std::string const &dest, std::string const & message);
};

#endif
