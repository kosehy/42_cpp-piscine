/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:52:00 by sko               #+#    #+#             */
/*   Updated: 2020/01/18 16:52:00 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{
public:
	virtual	~ISpaceMarine() {}
	virtual	ISpaceMarine	*clone() const = 0;
	virtual void	battleCry() const = 0;
	virtual void	rangedAttack() const = 0;
	virtual void	meleeAttack() const = 0;
};

#endif

