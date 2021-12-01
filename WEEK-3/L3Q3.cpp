#include <iostream>
using namespace std;

int main()
{
	int today, future;
	string day,f_day; 
	cout << "enter today's day: ";
	cin >> today;
	
	cout<< "\nEnter the number of days elapsed since today: ";
	cin >> future;
	future++;
	
	switch(today)
	{
		case 1: day = "monday";break;
		case 2: day = "tuesday";break;
		case 3: day = "wednesday";break;
		case 4: day = "thursday";break;
		case 5: day = "friday";break;
		case 6: day = "saturday";break;
		case 7: day = "sunday";break;
	}
	switch(future)
	{
		case 1: f_day = "monday";break;
		case 2: f_day = "tuesday";break;
		case 3: f_day = "wednesday";break;
		case 4: f_day = "thursday";break;
		case 5: f_day = "friday";break;
		case 6: f_day = "saturday";break;
		case 7: f_day = "sunday";break;
	}
		cout << "today is " << day << " and the future is "
		<< f_day;
		
		 
	
	return 0;

}

