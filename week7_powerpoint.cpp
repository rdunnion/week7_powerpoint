#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number;
	cout << "Please enter a number between 1 and 100:\n";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "Your number is " << number
		<< "\nIt is an even number";
		ofstream number_file;
		number_file.open("number.txt");
		number_file << "Your number is " << number
		<< "\nIt is an even number";
		number_file.close();
	}
	else
	{
		cout << "Your number is " << number
			<< "\nIt is an odd number";
		ofstream number_file;
		number_file.open("number.txt");
		number_file << "Your number is " << number
			<< "\nIt is an odd number";
		number_file.close();
	}

	return 0;
}