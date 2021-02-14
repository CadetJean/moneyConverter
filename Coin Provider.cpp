
//this program provide change
#include <iostream>

int main() {

	const int dollar_value{ 100 };
	const int quarter_value{ 25 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };

	int change_amount;
	std::cout << "enter amount: \n";
	std::cin >> change_amount;

	int balance{}, dollars{}, quarter{}, dimes{}, nickels{}, penies{};

	dollars = change_amount / quarter_value;
	balance = change_amount - (dollars * quarter_value);

	quarter = balance / quarter_value;
	balance -= quarter * quarter_value;

	dimes = balance / dime_value;
	balance -= dimes * dime_value;

	nickels = balance / nickel_value;
	balance -= nickels * nickel_value;

	penies = balance;

	std::cout << "\nyou can provide this many change: ";
	std::cout << "dollar: " << dollars; std::cout << "\n";
	std::cout << "quarter: " << quarter; std::cout << "\n";
	std::cout << "dime :" << dimes; std::cout << "\n";
	std::cout << "nickel: " << nickels; std::cout << "\n";
	std::cout << "penies: " << penies; std::cout << "\n";

	return 0;

	// Zeroing everything other to use the modulo sign
	balance = dollars = quarter = dimes = nickels = penies = 0;

	dollars = change_amount / dollar_value;
	balance = change_amount % dollar_value;

	quarter = balance / quarter_value;
	balance %= quarter_value;

	dimes = balance / dime_value;
	balance %= dime_value;

	nickels = change_amount / nickel_value;
	balance %= dime_value;

	penies = balance;

	std::cout << "\nyou can provide this many change: \n";
	std::cout << "dollar: " << dollars; std::cout << "\n";
	std::cout << "quarter: " << quarter; std::cout << "\n";
	std::cout << "dime :" << dimes; std::cout << "\n";
	std::cout << "nickel: " << nickels; std::cout << "\n";
	std::cout << "penies: " << penies; std::cout << "\n";

	return 0;


}
