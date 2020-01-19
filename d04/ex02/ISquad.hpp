/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:00:57 by sko               #+#    #+#             */
/*   Updated: 2020/01/18 17:00:58 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual	~ISquad() {}
	virtual int	getCount() const = 0;
	virtual	ISpaceMarine	*getUnit(int) const = 0;
	virtual	int	push(ISpaceMarine*) = 0;
};

#endif
