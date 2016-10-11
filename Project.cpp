#include <iostream>
using namespace std;

void mainMenu();

int main()
{
	int choice;
	
	do
	{
		mainMenu();
		cin >> choice;
	}
	return 0;
}

void mainMenu()
{
	cout << "Anti Pollution Plants Information\n\n"
	<< "What plants info do you want to look up?\n"
	<< "---------------------------------\n"
	<<"1. Longan trees\n"
	<<"2. Mahogany trees\n"
	<<"3. Moss\n"
	<<"The one you choose is:";
}

void 
