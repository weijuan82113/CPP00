#include "Account.hpp"
#include <iostream>
#include <ios>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(0),_amount(0),_nbDeposits(0),_nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
		<< this->_amount << ";created" << std::endl;
	_nbAccounts ++;
	_totalAmount += initial_deposit;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";amount:" << this->_amount \
		<< ";close" \
		<< std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() \
		<< ";total:" << getTotalAmount() \
		<< ";deposits:" << getNbDeposits() \
		<< ";withdrawals:" << getNbWithdrawals() \
		<< std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";amount:" << this->_amount \
		<< ";deposits:" << this->_nbDeposits \
		<< ";withdrawals:" << this->_nbWithdrawals \
		<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";p_amount:" << p_amount \
		<< ";deposit:" << deposit \
		<< ";amount:" << this->_amount \
		<< ";nb_deposits:" << this->_nbDeposits \
		<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount = this->_amount;
	if (checkAmount() >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex \
			<< ";p_amount:" << p_amount \
			<< ";withdrawal:" << withdrawal \
			<< ";amount:" << this->_amount \
			<< ";nb_withdrawals:" << this->_nbDeposits \
			<< std::endl;
		return (true);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex \
			<< ";p_amount:" << p_amount \
			<< ";withdrawal:" << "refused" \
			<< std::endl;
		return (false);
	}

}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	struct tm *now = localtime(&t);
	std::cout << '[' << (now->tm_year + 1900) \
	<< std::right << std::setfill('0') << std::setw(2) << (now->tm_mon + 1) \
	<< std::right << std::setfill('0') << std::setw(2) << (now->tm_mday) \
	<< '_' \
	<< std::right << std::setfill('0') << std::setw(2) << (now->tm_hour) \
	<< std::right << std::setfill('0') << std::setw(2) << (now->tm_min) \
	<< std::right << std::setfill('0') << std::setw(2) << (now->tm_sec) \
	<< "] ";
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
