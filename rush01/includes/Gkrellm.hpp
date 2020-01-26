/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gkrellm.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 12:18:17 by sko               #+#    #+#             */
/*   Updated: 2020/01/25 12:19:02 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GKRELLM
# define GKRELLM

/*
** Literally including EVERYTHING that I might end up using
*/
# include <ncurses.h>
# include <curses.h>
# include <iostream>
# include <fstream>
# include <string>
# include <iomanip>
# include <sstream>
# include <vector>
# include <map>
# include <list>
# include <algorithm>
# include <ncurses.h>
# include <curses.h>
# include <thread>
# include <unistd.h>
# include <limits.h>
# include <ctime>
# include <sys/utsname.h>
# include <numeric>
# include <stdio.h>
# include <stdint.h>
# include <sys/types.h>
# include <sys/sysctl.h>

# include <SFML/Graphics.hpp>

# include <IMonitorModule.hpp>
# include <IMonitorDisplay.hpp>
//# include <HostNameModule.hpp>
//# include <OSInfoModule.hpp>
//# include <DateTimeModule.hpp>
//# include <CPUInfoModule.hpp>
//# include <CPUUsageModule.hpp>
//# include <RAMUsageModule.hpp>
//# include <NetworkInfoModule.hpp>
//# include <TerminalDisplay.hpp>
# include <GraphicDisplay.hpp>
//# include <PonyModule.hpp>

void	text_display(std::vector<std::string> flags);
void	image_display(std::vector<std::string> flags);

#endif