/**
*@author Abdul Hannan Bin Zainudin
* Matric no: 2118719
* Lab #1 Section #04
*/

#include <iostream>
using namespace std;

int main()
{
	int subtotal;
	double gratuity_rate;
	double gratuity;
	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> gratuity_rate;
	
	
	gratuity = (gratuity_rate/100)* subtotal;
	cout << "The gratuity is $" << gratuity << " and total is $" << subtotal + gratuity;
	return 0;

}

