/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:32:10 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/19 18:08:57 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

Account::Account() {}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout <<
		"index:"; << index <<
		";amount:" << amount <<
		";created";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout <<
		"index:"; << index <<
		";amount:" << amount <<
		";closed";
}



static int	getNbAccounts(void)
{
	return (0);
}

static int	getTotalAmount(void)
{
	return (0);
}

static int	getNbDeposits(void)
{
	return (0);
}

static int	getNbWithdrawals(void)
{
	return (0);
}

static void	displayAccountsInfos(void)
{
}



void	makeDeposit(int deposit)
{
}

bool	makeWithdrawal(int withdrawal)
{
	return (true);
}

int		checkAmount(void)
{
	return (0);
}

void	displayStatus(void)
{
}



void	Account::_displayTimestamp(void)
{
	time_t now = std::time(NULL);
	struct tm timenow = *std::localtime(&now);

	std::cout << "[" << timenow.tm_year + 1900 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mon + 1 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mday << "_" <<
	std::setfill('0') << std::setw(2) << timenow.tm_hour <<
	std::setfill('0') << std::setw(2) << timenow.tm_min <<
	std::setfill('0') << std::setw(2) << timenow.tm_sec <<
	"] ";
}
