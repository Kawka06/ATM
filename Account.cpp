#include "Account.h"

using namespace std;

Account::Account(void) :balance(0)
{
}

vector<string> Account::Report()
{
	vector<string> report;
	report.push_back("Balance is " + to_string(balance));
	report.push_back("Transactions: ");

	for (auto t : log)
	{
		report.push_back(t.Report());
	}
	report.push_back("------------------");

	return report;
}

bool Account::Deposit(float amt)
{
	if (amt >= 0)
	{
		balance += amt;
		log.push_back(Transaction(amt, "Desposit"));
		return true;
	}
	else
	{
		return false;
	}
}

bool Account::Withdraw(float amt)
{
	if (amt >= 0)
	{
		if (balance >= amt)
		{
			balance -= amt;
			log.push_back(Transaction(amt, "Withdraw"));
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

//float Account::GetBalance()
//{
//	return balance;
//}