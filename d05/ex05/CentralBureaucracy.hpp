/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 22:22:04 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 22:22:05 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP

#include <ctime>
#include "OfficeBlock.hpp"

class CentralBureaucracy {
public:
	/* Canonical Member Functions */
	CentralBureaucracy(void);

	CentralBureaucracy(CentralBureaucracy &obj);

	virtual    ~CentralBureaucracy(void);

	/* Operator Overloads */
	CentralBureaucracy &operator = (CentralBureaucracy &rhs);

	/* Member Functions */
	void feedSigner(Bureaucrat &obj);

	void feedExecuter(Bureaucrat &obj);

	void queueUp(std::string obj);

	void doBureaucracy(void);

private:
	OfficeBlock _officeBlock[20];
	std::string _target[50];
};

#endif
