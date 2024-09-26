/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:32:10 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/26 10:47:48 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() {}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created"
		<< std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed"
		<< std::endl;
}



int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}



void	Account::makeDeposit(int deposit)
{
	//[19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount + deposit
		<< ";nb_deposit:" << ++this->_nbDeposits
		<< std::endl;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	//[19920104_091532] index:0;p_amount:47;withdrawal:refused
	//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	if (withdrawal > this->_amount)
	{
		_displayTimestamp();
		std::cout
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:" << "refused"
			<< std::endl;
		return (false);
	}
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount - withdrawal
		<< ";nb_withdrawals:" << ++this->_nbWithdrawals
		<< std::endl;
	this->_amount -= withdrawal;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (0);
}

void	Account::displayStatus(void) const
{
	//[19920104_091532] index:4;amount:1321;deposits:1;withdrawals:0
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}


void	Account::_displayTimestamp(void)
{
	char	buffer[80];
	time_t now = std::time(NULL);
	struct tm *time = std::localtime(&now);
	std::strftime(buffer, 80, "%Y%m%d_%H%M%S", time);
	std::cout << "[" << buffer << "]";
}
