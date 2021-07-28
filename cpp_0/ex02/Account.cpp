
#include "Account.hpp"
#include <iostream>
#include <sys/time.h>

int		Account::_nbAccounts = 0;

int		Account::_totalAmount = 0;

int		Account::_totalNbDeposits = 0;	

int		Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	struct timeval	tp;
	struct timezone	tzp;

	settimeofday(&tp, &tzp);
	gettimeofday(&tp, &tzp);
	
	std::cout << "[" << tp.tv_sec << "_" << tp.tv_usec << "] ";
}

Account::Account(int deposit) : _amount(deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	Account::_totalAmount += deposit;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalNbWithdrawals -= this->_nbWithdrawals;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;

	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;

	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;

	if (withdrawal > Account::checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	
	std::cout << ";withdrawal:" << withdrawal;

	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;

	std::cout << ";amount:" << this->_amount << ";nb_whithdrawals:" << this->_nbWithdrawals << std::endl;
		
	return (true);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"; 
	std::cout << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;

	return ;
}

int		Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int		Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int		Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);	
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;

	return ;
}
