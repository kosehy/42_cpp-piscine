/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:06:11 by sko               #+#    #+#             */
/*   Updated: 2020/01/14 16:06:29 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>

int 	Account::_nbAccounts = 0;
int 	Account::_totalAmount = 0;
int 	Account::_totalNbDeposits = 0;
int 	Account::_totalNbWithdrawals = 0;
int		*count_checkAmount = 0;

Account::Account(void) {};

Account::Account(int initial_deposit)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" \
	<< _amount << ";created" << std::endl;
};

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" \
	<< _amount << ";closed" << std::endl;
};

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(nullptr);
	std::cout << std::put_time(std::localtime(&t), "[%Y%m%d_%OH%OM%OS] ");
}

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int 	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}


int 	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount \
	<< ";deposit:" << deposit << ";amount:";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool 	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal <= _amount)
	{
		std::cout << withdrawal << ";amount:";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

int 	Account::checkAmount(void) const
{
	int 	count = 1;
	*count_checkAmount += count;
	return (_amount);
}

void 	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << \
	_nbDeposits << ";withdrawals:" << _nbWithdrawals << "number of checkAmount called:" << std::endl;
	//count_checkAmount << std::endl;
}

void 	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" \
	<< _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:"  \
	<< _totalNbWithdrawals << std::endl;
}
