/**
*@author Abdul hannan bin zainudin
* Matric no: 2118719
* Lab #5 Section #1
*/

#include <iostream>
using namespace std;
float calculateCharges(float);
const float MIN = 2.00;
const float MAX = 10.00;
int main()
{
	float hours;
	
	cout << "Enter the hour(s): ";
	cin >> hours;
	cout << "your total fees are: " << calculateCharges(hours);
	return 0;

}

float calculateCharges(float hrs)
{
	float totalFee = 0, charge = 0, i;
	
	if(hrs <= 3)
		totalFee = MIN;
		
	else if (hrs >= 3 && hrs <= 19)
	{
		
		hrs = hrs - 3;
		for(i = 1; i <= hrs; i++)
		{
			charge = charge + 0.50;
			
		}
		
		 totalFee = MIN + charge;				
	}
	else if ( hrs >= 19)
		totalFee = MAX;	
		
	return totalFee;
}







