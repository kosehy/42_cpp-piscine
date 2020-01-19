/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 19:26:51 by sko               #+#    #+#             */
/*   Updated: 2020/01/18 19:26:52 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUSSAULTTERMINATOR_HPP
#define AUSSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &obj);
	virtual ~AssaultTerminator(void);

	AssaultTerminator &operator = (AssaultTerminator const &rhs);

	ISpaceMarine	*clone() const;
	void	battleCry(void) const;
	void	rangedAttack(void) const;
	void	meleeAttack(void) const;
};

#endif
