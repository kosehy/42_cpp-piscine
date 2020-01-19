/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:51:11 by sko               #+#    #+#             */
/*   Updated: 2020/01/18 16:51:11 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &obj);
	virtual ~TacticalMarine(void);

	TacticalMarine &operator = (TacticalMarine const &rhs);

	ISpaceMarine	*clone() const;
	void	battleCry(void) const;
	void	rangedAttack(void) const;
	void	meleeAttack(void) const;
};

#endif