#include <iostream>
using namespace std;

//This is for functions for it capable to put under int main().
void mainMenu();
void mahogany();
void moss();
void papyrus();
void question(int);

int main()
{
	int choice; //Connected to cin to input which choices do you pick
	int choice2;
	
	const int PAPYRUS_CHOICE = 1,
    MAHOGANY_CHOICE = 2,
    MOSS_CHOICE = 3,
    QUESTION_CHOICE = 4,
    QUIT_CHOICE = 5;
	
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
			break;
			case QUESTION_CHOICE:
			question(choice2);
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
	<<"4. Questionnaire\n" 
	<<"5. Quit\n"
	<<"Choose with numbers between 1, 2, 3, 4, and 5."
	<<"The one you choose is: ";
}

void papyrus() //Contains short information about papyrus plant
{
	cout<<"Description:\n"
	<<"Papyrus ia a tree that looks like a fan and can grow until 3-5 meter long."
	<<"It grows on the riverbank and count as one of the fastest growing plants .\n"<<
	endl<<"How it helps polution:"<<
	endl<<"It absorb heavy pollutan inside water.\n"<<
	endl<<"Other known function: \n"
	<<"It can be used to create papers, baskets. In Egypt era, it can be eaten by grilled or eat it raw, and it also used for medicine for ulcers"<<endl<<endl;
}

void mahogany() //Contains short information about mahogany tree
{
	cout<<"Description:\n"
	<<"Mahogany tree is a big tree with height from 35-40 meters and has diameter until 125 centimeters."
	<<"It can grow nicely if it's planted on briny water near the beach.\n"<<
	endl<<"How it helps polution:"<<
	endl<<"It can reduce air pollution from 47%-69%. It's good at keeping water and filtering polluted air. \n"
	<<"It can grows on coarse ground."
	<<endl<<"Other known function: \n"
	<<"The mahoni tree fruit can be used for medicine. It can reduce cholestrol, reduce pain, and act as antioksidan to reduce cancer posibility."<<endl<<endl;
}

void moss()//Contains short information about moss plant
{
	cout<<"Description:\n"
	<<"Moss is a plant that has leaves and roots but it was imperfect or \nit has not fully developed yet\n"
	<<"It doesn't have flowers or fruits.\n"
	<<"It can grows on everywhere. On trees or on rocks, it even can grow at north pole.\n"<<
	endl<<"How it helps polution:"<<
	endl<<"The more moss grows on trees, the more cleaner the air around it. It basically \nnature measurement for clean air.\n"
	<<"It also store water and absorb pollutan in air."<<endl<<endl;
}

void question(int choice2)
{
	cout<<"There is ten questions you need to answer. If you manage to answer all correctly, then you are paying attention to what written in the post.\n\n ";
	cout<<"First, how tall Mahogany trees could grow?\n"
	<<"1. 35-40 meters\n"
	<<"2. 55-60 meters\n"
	<<"Enter your answer in number:";
	cin>>choice2;
	
	if (choice2 == 1)
	{
		cout<<"You answer correctly. On to the next question.";
	}
	else if (choice2 == 2 )
	{
		cout<<"You answer wrong. Try harder in the next question\n";
	}
	if (choice2<1||choice2>2)
	{
		cout<<"You must enter between 1 and 2\n";
		question(choice2);
	}
	
	cout<<"Second, can moss grow flower and fruit?"
	<<"1. Yes.\n2. No."
	<<"Enter your answer in number:";
	cin>>choice2;
	
	if (choice2 == 1)
	{
		cout<<"You answer wrong. Try harder in the next question\n";
	}
	else if (choice2 == 2 )
	{
		cout<<"You answer correctly. On to the next question.\n";
	}
	if (choice2<1||choice2>2)
	{
		cout<<"You must enter between 1 and 2\n";
		question(choice2);
	}
	
	cout<<"Third, on what kind of enviroment can mahogany trees grow?"
	<<"1. It has to be on fertile ground"
	<<"2. It can grow on coarse ground or near the beach with briny water"
	<<"Enter your answer in number:";
	cin>>choice2;
	
	if (choice2 == 1)
	{
		cout<<"You answer wrong. Try harder in the next question\n";
	}
	else if (choice2 == 2 )
	{
		cout<<"You answer correctly. On to the next question.\n";
	}
	if (choice2<1||choice2>2)
	{
		cout<<"You must enter between 1 and 2\n";
		question(choice2);
	}
	
	cout<<"Fourth, which plant CAN NOT filter polutan in air?"
	<<"1. Papyrus.\n2. Moss."
	<<"Enter your answer in number:";
	cin>>choice2;
	
	if (choice2 == 1)
	{
		cout<<"You answer correctly. On to the next question.";
	}
	else if (choice2 == 2 )
	{
		cout<<"You answer wrong. Try harder in the next question\n";
	}
	if (choice2<1||choice2>2)
	{
		cout<<"You must enter between 1 and 2\n";
		question(choice2);
	}
	
	cout<<"Fifth, where moss could grow?"
	<<"1. On wet rainy area.\n2. Everywhere except dry place."
	<<"Enter your answer in number:";
	cin>>choice2;
	
	if (choice2 == 1)
	{
		cout<<"You answer wrong. Try harder in the next question\n";
	}
	else if (choice2 == 2 )
	{
		cout<<"You answer correctly. On to the next question.\n";
	}
	if (choice2<1||choice2>2)
	{
		cout<<"You must enter between 1 and 2\n";
		question(choice2);
	}
	
	cout<<"Sixth, what kind of medicine can mahogany fruit heal?"
	<<"1. reduce cholestrol.\n2. reduce nausea."
	<<"Enter your answer in number:";
	cin>>choice2;
	
	if (choice2 == 1)
	{
		cout<<"You answer correctly. On to the next question.\n";
	}
	else if (choice2 == 2 )
	{
		cout<<"You answer wrong. Try harder in the next question\n";
	}
	if (choice2<1||choice2>2)
	{
		cout<<"You must enter between 1 and 2\n";
		question(choice2);
	}
}
