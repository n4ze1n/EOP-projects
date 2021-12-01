/*
name : abdulhannan bin zainudin
no matric: 2118719
*/
#include <iostream>
using namespace std;
int getMenuChoice();


int main()
{
	int counter1 = 1,counter2 =6,ch, choice1;
	
	
do
{
	ch = getMenuChoice();
	
	if ( ch == 1 )
	{
		if ( counter1 <= 5)
		{	
			cout << "Morning session. Slot "<< counter1 << endl;
			counter1++;	
		}
		else
		{
			cout << "Morning session is full, Afternoon session?\n 1.Yes, 2.No\n Your choice: ";
			cin >> choice1; 
			cout << endl;
			if(choice1 ==1)
			{
				cout << "Afternoon session.Slot "<< counter2 << endl;
				counter2++;
			}
			else if(choice1 == 2)
				cout <<  "Presentations will be held next Monday." << endl;
		}
			
	}
else if ( ch == 2 )
{
	if ( counter2 <= 10)
		{	
			cout << "Afternoon session. Slot "<< counter2 << endl;
			counter2++;	
		}
		else
		{
			cout << "Morning session is full, Morning session?\n 1.Yes, 2.No\n Your choice: ";
			cin >> choice1; 
			cout << endl;
			if(choice1 ==1)
			{
				cout << "Morning session.Slot "<< counter1 << endl;
				counter1++;
			}
			else if(choice1 == 2)
				cout <<  "Presentations will be held next Monday." << endl;
		}
}	
}while (counter2 <=10 || counter1 <=5);

cout << "\nBoth sessions are full.";
		
	return 0;

}
int getMenuChoice()
{
	int choice;
	
	cout << "Please type 1 for Morning session\nPlease type 2 for Afternoon session.\n";
	cout << "choice: ";
	cin >> choice;
	
	
	return choice;
}

