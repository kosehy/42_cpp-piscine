/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:34 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 15:23:34 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	int 	_n;
	Zombie	*_zombies;
public:
	ZombieHorde(int n);
	~ZombieHorde(void);

	Zombie	&createRand(void);
	void	announce(void);
};

#endif
