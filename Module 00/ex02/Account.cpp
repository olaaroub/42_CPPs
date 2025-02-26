#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int Account::getNbAccounts() {
    return _nbAccounts;
}

int Account::getTotalAmount() {
    return _totalAmount;
}

int Account::getNbDeposits() {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
}

int Account::checkAmount() const{
    return _amount;
}

Account::Account( int initial_deposit ) {


    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void    Account::displayAccountsInfos(){


    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}


void Account::_displayTimestamp() {


    time_t now = time(NULL);
    tm *ltm = localtime(&now);
    std::cout << "[" << 1900 + ltm->tm_year
              << 1 + ltm->tm_mon
              << ltm->tm_mday << "_"
              <<  ltm->tm_hour
              <<  ltm->tm_min
              <<  ltm->tm_sec << "] ";

}


void Account::displayStatus() const {


    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:"<< _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl ;

}


void Account::makeDeposit(int deposit) {


    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount - deposit
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;

}

bool Account::makeWithdrawal(int withdrawal) {


    if(withdrawal > _amount) {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << _amount
                  << ";withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal ;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount + withdrawal
              << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;
    return true;

}

Account::~Account( void ){


    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;

}