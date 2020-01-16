/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:22:31 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 19:22:32 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon*		_weapon;
	std::string _name;

public:
	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon& weapon);
};

#endif
