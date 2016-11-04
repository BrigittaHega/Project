#include <iostream>
using namespace std;

struct Project
{
	int choice; //Connected to cin to input which choices do you pick
	int choice2;
};

//This is for functions for it capable to put under int main().
void mainMenu();
void mahogany();
void moss();
void papyrus();
void question(Project);

int main()
{
	Project project;
	
	const int PAPYRUS_CHOICE = 1,
    MAHOGANY_CHOICE = 2,
    MOSS_CHOICE = 3,
    QUESTION_CHOICE = 4,
    QUIT_CHOICE = 5;
	
	do
	{
		mainMenu(); //called main menu function
		cin >> project.choice ;
		
		while (project.choice < PAPYRUS_CHOICE || project.choice > QUIT_CHOICE) 
		// This will happen if you input neither between papyrus choice to quit choice in number
		{
			cout << "Please enter a valid menu choice: ";
			cin >> project.choice;
		}
		if (project.choice != QUIT_CHOICE)
	
	// Display the membership fees.
		switch (project.choice)
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
			question(project);
		}
	}
	while (project.choice != QUIT_CHOICE);
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

void question(Project pro)
{
	cout<<"\n\nThere is ten questions you need to answer. If you manage to answer all correctly, then you are paying attention to what written in the post.\n"
	<<"Remember: there is no win or lose in this questionnaire. We just want to test your skill.\n\n ";
	cout<<"First, how tall Mahogany trees could grow?\n"
	<<"1. 35-40 meters\n"
	<<"2. 55-60 meters\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
		{
			cout<<"You answer correctly. On to the next question.\n\n";
		}
		else if (pro.choice2 == 2 )
		{
			cout<<"You answer wrong. Try harder in the next question\n\n";
		}
		if (pro.choice2<1||pro.choice2>2)
		{
			cout<<"You must enter between 1 and 2\n";
			cin>>pro.choice2;
			if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
		}
	}
	
	cout<<"Second, can moss grow flower and fruit?\n"
	<<"1. Yes.\n2. No.\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
		if (pro.choice2<1||pro.choice2>2)
		{
			cout<<"You must enter between 1 and 2\n";
			cin>>pro.choice2;
			cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
		}
	}
	
	
	
	cout<<"Third, on what kind of enviroment can mahogany trees grow?\n"
	<<"1. It has to be on fertile ground\n"
	<<"2. It can grow on coarse ground or near the beach with briny water\n"
	<<"Enter your answer in number: ";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
			else if (pro.choice2 == 2 )
			{
			cout<<"You answer correctly. On to the next question.\n\n";
			}
		if (pro.choice2<1||pro.choice2>2)
		{
		cout<<"You must enter between 1 and 2\n";
		cin>>pro.choice2;
		cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
			else if (pro.choice2 == 2 )
			{
			cout<<"You answer correctly. On to the next question.\n\n";
			}
		}
	}
	
	
	
	cout<<"Fourth, which plant CAN NOT filter polutan in air?\n"
	<<"1. Papyrus.\n2. Moss.\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
			cout<<"You answer wrong. Try harder in the next question\n\n";
			}
		if (pro.choice2<1||pro.choice2>2)
		{
			cout<<"You must enter between 1 and 2\n";
			cin>>pro.choice2;
			cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
			cout<<"You answer wrong. Try harder in the next question\n\n";
			}
		}
		
	}
	
	
	
	cout<<"Fifth, where moss could grow?\n"
	<<"1. On wet rainy area.\n2. Everywhere except dry place.\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
		{
			cout<<"You answer wrong. Try harder in the next question\n\n";
		}
		else if (pro.choice2 == 2 )
		{
			cout<<"You answer correctly. On to the next question.\n\n";
		}
		if (pro.choice2<1||pro.choice2>2)
		{
		cout<<"You must enter between 1 and 2\n";
		cin>>pro.choice2;
		cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
		
		}
	}
	
	cout<<"Sixth, what kind of medicine can mahogany fruit heal?\n"
	<<"1. reduce cholestrol.\n2. reduce nausea.\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}	
		if (pro.choice2<1||pro.choice2>2)
		{
			cout<<"You must enter between 1 and 2\n";
			cin>>pro.choice2;
			cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
		
		}
	}
	
	cout<<"Seven, which plant can grow the fastest?\n"
	<<"1. moss.\n2. Papyrus.\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
		if (pro.choice2<1||pro.choice2>2)
		{
			cout<<"You must enter between 1 and 2\n";
			cin>>pro.choice2;
			cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
		}
	}
	
	
	
	cout<<"Eight, what diameter Mahogany tree could grown so far?\n"
	<<"1. 125 centimeters.\n2. 150 centimeters.\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
		if (pro.choice2<1||pro.choice2>2)
		{
			cout<<"You must enter between 1 and 2\n";
			cin>>pro.choice2;
			cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the next question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer wrong. Try harder in the next question\n\n";
			}
		}
	}
	

	
	cout<<"Nine, What is other function for Papyrus plant?\n"
	<<"1. Smoking.\n2. Medicine.\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. You are close to the last question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer correctly. On to the last question.\n\n";
			}
		if (pro.choice2<1||pro.choice2>2)
		{
			cout<<"You must enter between 1 and 2\n";
			cin>>pro.choice2;
			cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer wrong. You are close to the the last question\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer correctly. On to the last question.\n\n";
			}
		}
	}
	
		cout<<"Ten, How many percent air pollution the mahogany tree could reduce?\n"
	<<"1. 47%-69%n2. 50%-79%\n"
	<<"Enter your answer in number:";
	cin>>pro.choice2;
	
	if (pro.choice2 >=1 || pro.choice2 <=2)
	{
		if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the last question.\n\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer wrong. You are close to the last question.\n\n";
			}
		if (pro.choice2<1||pro.choice2>2)
		{
			cout<<"You must enter between 1 and 2\n";
			cin>>pro.choice2;
			cout<<"\nDon't enter wrong again.\n";
			if (pro.choice2 == 1)
			{
				cout<<"You answer correctly. On to the last question.\n";
			}
			else if (pro.choice2 == 2 )
			{
				cout<<"You answer wrong. You are close to the the last question\n";
			}
		}
	}
	
	
}
