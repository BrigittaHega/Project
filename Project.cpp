#include <iostream>
using namespace std;

//This is for functions for it capable to put under int main().
void mainMenu();
void mahogany();
void moss();

int main()
{
	int choice; //Connected to cin to input which choices do you pick
	
	const int PAPYRUS_CHOICE = 1,
    MAHOGANY_CHOICE = 2,
    MOSS_CHOICE = 3,
    QUIT_CHOICE = 4;
	
	do
	{
		mainMenu(); //called main menu function
		cin >> choice;
		
		while (choice < PAPYRUS_CHOICE || choice > QUIT_CHOICE) 
		// This will happen if you input neither between papyrus choice to quit choice
		{
			cout << "Please enter a valid menu choice: ";
			cin >> choice;
		}
		if (choice != QUIT_CHOICE)
	
	// Display the membership fees.
		switch (choice)
		{
			case PAPYRUS_CHOICE: //(?)
			papyrus(); //Called papyrus function
			break;
			case MAHOGANY_CHOICE:
			mahogany(); // called mahogany function
			break;
			case MOSS_CHOICE:
			moss(); // called moss function
		}
	}
	while (choice != QUIT_CHOICE);
	return 0;
}

void mainMenu() //The main menu function
{
	cout << "Anti Pollution Plants Information\n\n"
	<< "What plants info do you want to look up?\n"
	<< "---------------------------------\n"
	<<"1. Papyrus plants\n"
	<<"2. Mahogany trees\n"
	<<"3. Moss\n"
//	<<"4. Questionnaire\n" (????)
	<<"Choose with numbers between 1, 2, 3, and 4."
	<<"The one you choose is: ";
}

void papyrus() //Contains short information about papyrus plant
{
	cout<<"Description:\n"
	<<"Papyrus ia a tree that looks like a fan and can grow until "
	<<"It grows on the riverbank and count as one of the fastest growing plants .\n"<<
	endl<<"How it helps polution:"<<
	endl<<"It absorb heavy pollutan .\n"
	<<"It also store water and absorb pollutan."<<endl<<endl;
}

void mahogany() //Contains short information about mahogany tree
{
	cout<<"Description:\n"
	<<"Mahogany tree is a big tree with height from 35-40 meters and has diameter until 125 centimeters."
	<<"It can grow nicely if it's planted on briny water near the beach.\n"<<
	endl<<"How it helps polution:"<<
	endl<<"It can grows on coarse ground.\n"
	<<"."<<endl<<endl;
}

void moss()//Contains short information about moss plant
{
	cout<<"Description:\n"
	<<"Moss is a plant that has leaves and roots but it was imperfect or \nit has not fully developed yet\n"
	<<"It doesn't have flowers or fruits.\n"
	<<"It can grows on everywhere. On trees or on rocks, it even can grow at north pole.\n"<<
	endl<<"How it helps polution:"<<
	endl<<"The more moss grows on trees, the more cleaner the air around it. It basically \nnature measurement for clean air.\n"
	<<"It also store water and absorb pollutan."<<endl<<endl;
}
