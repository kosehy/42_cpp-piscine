/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:50:59 by sko               #+#    #+#             */
/*   Updated: 2020/01/18 16:51:00 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	typedef struct	_marinelist
	{
		ISpaceMarine		*marine;
		struct	_marinelist	*next;
	}				t_marinelist;

public:
	Squad(void);
	Squad(Squad &obj);
	virtual ~Squad(void);

	Squad &operator = (Squad const &rhs);
	int	getCount() const;
	ISpaceMarine	*getUnit(int) const;
	int	push(ISpaceMarine*);

private:
	int	_unit;
	struct _marinelist	*_marine;
};

#endif
