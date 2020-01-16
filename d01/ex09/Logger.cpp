/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:40:46 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 21:40:48 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string file) : _file(file) {};
Logger::~Logger(void) {};

void	Logger::logToConsole(std::string const &message)
{
	std::cout << makeLogEntry(message);
}

void	Logger::logToFile(std::string const &message)
{
	std::ofstream os;
	os.open(this->_file);
	os << makeLogEntry(message);
	os.close();
}

std::string Logger::makeLogEntry(std::string const &message) const
{
	std::stringstream str;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	str << "[" << std::setw(2) << std::right << std::setfill('0') \
			   << timePtr->tm_mday << "/" \
			   << std::setw(2) << std::right << std::setfill('0') \
			   << timePtr->tm_mon + 1 << "/" \
			   << std::setw(2) << std::right << std::setfill('0') \
			   << timePtr->tm_year + 1900 << " " \
			   << std::setw(2) << std::right << std::setfill('0') \
			   << timePtr->tm_hour << ":" \
			   << std::setw(2) << std::right << std::setfill('0') \
			   << timePtr->tm_min << "]" << message << std::endl;
	return str.str();
}

typedef void(Logger::*select) (std::string const &);

void	Logger::log(std::string const &dest, std::string const & message)
{
	std::string types[2] = { "console", "file" };
	select		selects[2] = {
		&Logger::logToConsole,
		&Logger::logToFile
	};
	for (int i = 0; i < 2; ++i)
	{
		if (types[i].compare(dest) == 0)
			(this->*selects[i])(message);
	}
}
