#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp() {
    time_t now = time(NULL);
    tm *ltm = localtime(&now);
    std::cout << "[" <<1900 + ltm->tm_year
              << 1 + ltm->tm_mon
              << ltm->tm_mday << "_"
              <<  ltm->tm_hour << ":"
              <<  ltm->tm_min << ":"
              <<  ltm->tm_sec << "]";
}


Account::Account( int initial_deposit )
{
    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts++;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

}
Account::~Account( void )
{

    std::cout << " DONE\n" ;

}