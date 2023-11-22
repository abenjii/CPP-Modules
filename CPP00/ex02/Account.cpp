/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:00:30 by alex              #+#    #+#             */
/*   Updated: 2023/11/14 16:48:14 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    Account::_accountIndex = Account::_nbAccounts;
    //Account::_amount = Account::_totalAmount;
    Account::_nbDeposits = Account::_totalNbDeposits;
    Account::_nbWithdrawals = Account::_totalNbWithdrawals;
    Account::_amount += initial_deposit;
	Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";ammout:";
    std::cout << Account::_amount << ";created" << std::endl; 
	_nbAccounts++;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:";
	std::cout << getTotalAmount() << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit << ";amount:";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdraw)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amout:" << checkAmount();
	if (checkAmount() > withdraw)
	{
		std::cout << ";withdrawal:" << withdraw;
		_amount -= withdraw;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << ";amout:" << checkAmount() << ";nb_withdrawals:";
		std::cout << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t currentTime;
	struct tm *timeInfo;
	
	currentTime = time(NULL);
	timeInfo = localtime(&currentTime);
	std::cout << "[" << timeInfo->tm_year - 100 << timeInfo->tm_mon + 1;
	std::cout << timeInfo->tm_mday << "_" << timeInfo->tm_hour;
	std::cout << timeInfo->tm_min << timeInfo->tm_sec << "] "; 
}

Account::~Account(void)
{
    _displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amout:";
	std::cout << checkAmount() << ":closed" << std::endl;
	_nbAccounts--;
}