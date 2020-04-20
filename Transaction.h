#include <string>

class Transaction
{
private:
	float amount;
	std::string type;
public:
	Transaction(float amt, std::string kind);
	std::string Report();
};
