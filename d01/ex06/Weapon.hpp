/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:22:00 by sko               #+#    #+#             */
/*   Updated: 2020/01/15 19:22:02 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string 	getType(void) const;
	void			setType(std::string type);
};

#endif
