#include <iostream>
using namespace std;

void mainMenu();

int main()
{
	int choice;
	
	const int LONGAN_CHOICE = 1,
    MAHOGANY_CHOICE = 2,
    MOSS_CHOICE = 3,
    QUIT_CHOICE = 4;
	
	do
	{
		mainMenu();
		cin >> choice;
		
		while (choice < LONGAN_CHOICE || choice > QUIT_CHOICE)
		{
			cout << "Please enter a valid menu choice: ";
			cin >> choice;
		}
		if (choice != QUIT_CHOICE)
	
	// Display the membership fees.
		switch (choice)
		{
			case LONGAN_CHOICE:
//			showFees(ADULT, months);
			break;
			case MAHOGANY_CHOICE:
//			showFees(CHILD, months);
			break;
			case MOSS_CHOICE:
//			showFees(SENIOR, months);
		}
	}
	while (choice != QUIT_CHOICE);
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
	<<"The one you choose is: ";
}

