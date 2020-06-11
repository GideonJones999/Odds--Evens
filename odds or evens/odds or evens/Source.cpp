#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
	cout << "This program will add 2 integers less than 100, and add them together. Then, it will tell you if the sum is even or odd." << endl;
	int numb1 = 0, numb2 = 0;
	cout << "Enter the 1st Integer.   " << endl;
	cin >> numb1;

	while (cin.fail() || numb1 > 100)
	{
		cout << "Error: Data not readable. Try again." << endl;
		cout << "Is your number greater than 100?" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		numb1 = 0;

		cout << "Enter the 1st Integer.   " << endl;
		cin >> numb1;
	}
	//
	cout << "Enter the 2nd Integer.   " << endl;
	cin >> numb2;
	while (cin.fail() || numb2 > 100)
	{
		cout << "Error: Data not readable. Try again." << endl;
		cout << "Is your number greater than 100?" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		numb2 = 0;

		cout << "Enter the 2nd Integer.   " << endl;
		cin >> numb2 ;
	}

	cout << "The two numbers are " << numb1 << " and " << numb2 << "." << endl;
	if ((numb1 + numb2) % 2 == 0) 
	{
		cout << "The sum of the two numbers is even."<< endl;
	}
	else if ((numb1 + numb2) % 2 == 1)
	{
		cout << "The sum of the two numbers is odd." << endl;
	}
	else
	{
		cout << "Something went wrong, please quit the program and try again." << endl;
	}

	system("PAUSE");
	return 0;
}