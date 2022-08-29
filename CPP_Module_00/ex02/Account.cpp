#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";closed"
				<< std::endl;
}

void	Account::_displayTimestamp(void) {
	time_t now;
	struct tm nowLocal; 

	now = time(NULL);
	nowLocal = *localtime(&now);

	std::cout	<< "["
				<< std::setw(4) << std::setfill('0') << nowLocal.tm_year + 1900
				<< std::setw(2) << std::setfill('0') << nowLocal.tm_mon + 1
				<< std::setw(2) << std::setfill('0') << nowLocal.tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << nowLocal.tm_hour
				<< std::setw(2) << std::setfill('0') << nowLocal.tm_min 
				<< std::setw(2) << std::setfill('0') << nowLocal.tm_sec
				<< "] ";
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals
				<< std::endl;
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts << ";"
				<< "total:" << _totalAmount << ";"
				<< "deposits:" << _totalNbDeposits << ";"
				<< "withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount - deposit << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits
				<< std::endl;

}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	if (withdrawal < _amount) {
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbDeposits--;
		_totalAmount -= withdrawal;
		std::cout	<< "index:" << _accountIndex << ";"
					<< "p_amount:" << _amount + withdrawal << ";"
					<< "withdrawal:" << withdrawal << ";"
					<< "amount:" << _amount << ";"
					<< "nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return true;
	} else {
		std::cout	<< "index:" << _accountIndex << ";"
					<< "p_amount:" << _amount << ";"
					<< "withdrawal:refused"
					<< std::endl;
		return false;
	}
}

int	Account::checkAmount( void ) const {
	return _totalAmount;
}