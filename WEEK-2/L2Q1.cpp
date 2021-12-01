/**
*@author Abdul Hannan Bin Zainudin
* Matric no: 2118719
* Lab #1 Section #2
*/


#include <iostream>
#include <iomanip>
using namespace std;
const float POUNDS = 52.2;

int main()
{
	float weightInKg;
	
	cout << "Enter the weight of person(KG): ";
	cin >> weightInKg;
	cout << fixed << showpoint;  
	cout << setprecision(2);
	cout << "Your weight in kilogram is: " << weightInKg << endl;
	cout << "Your weight in pound is: " << weightInKg*POUNDS;
	
	return 0;

}

