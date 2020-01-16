/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:38:43 by sko               #+#    #+#             */
/*   Updated: 2020/01/14 23:38:45 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string		_type;

public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
};

#endif
