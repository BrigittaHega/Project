#include <iostream>
using namespace std;

void mainMenu();
void mahogany();
void moss();

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
			case LONGAN_CHOICE: //(?)
//			(ADULT, months);
			break;
			case MAHOGANY_CHOICE:
			mahogany();
			break;
			case MOSS_CHOICE:
			moss();
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
//	<<"4. Questionnaire\n" (????)
	<<"The one you choose is: ";
}

void mahogany()
{
	
}

void moss()
{
	cout<<"Description:\n";
	cout<<"Moss is a plant that has leaves and roots but it was imperfect or \nit has not fully developed yet"<<
	endl<<"It can grows on everywhere. On trees or on rocks, mostly on place that always(?) wet.\n"<<
	endl<<"How it helps polution:"<<
	endl<<"The more moss grows on trees, the more cleaner the air around it. It basically \nnature measurement for clean air."
	<<endl<<""<<endl;
}
