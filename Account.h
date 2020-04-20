#include <vector>
#include <string>
#include "Transaction.h"


class Account 
{
private:
	float balance;
	std::vector<Transaction> log;
public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(float amt);
	bool Withdraw(float amt);
	float GetBalance() { return balance; }
};
