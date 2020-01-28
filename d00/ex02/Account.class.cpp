/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:00:18 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/13 23:53:37 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int     Account::getNbAccounts( void ) {
    return (_nbAccounts);
}

int     Account::getTotalAmount( void ) {
    return (_totalAmount);
}

int     Account::getNbDeposits( void ) {
    return (_totalNbDeposits);
}

int     Account::getNbWithdrawals( void ) {
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount 
        << ";deposits:" << _totalNbDeposits << ";withdrawals:"
        << _totalNbWithdrawals << std::endl;
}


Account::Account( int initial_deposit ) {
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount
        << ";created" << std::endl;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount
        << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount
        << ";deposit:" << deposit;
    _amount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    _totalAmount += deposit;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits
        << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount
        << ";withdrawal:";
    if (withdrawal > _amount) {
        std::cout << "refused" << std::endl;
        return (false);
    } else {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout  << withdrawal << ";amount:" << _amount 
            << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    return (true);
}

int		Account::checkAmount( void ) const{
    return (_amount);
}

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount
        << ";deposits:" << _nbDeposits << ";withdrawals:"
        << _nbWithdrawals << std::endl;
}


void	Account::_displayTimestamp( void ){
    std::time_t t = std::time(nullptr);
	std::cout << std::put_time(std::localtime(&t), "[%Y%m%d_%H%M%S]");
}


Account::Account( void ) {
    
}