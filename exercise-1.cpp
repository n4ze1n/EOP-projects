/**
*@author Abdul Hannan Bin Zainudin
* Matric no: 2118719
* Lab #1 Section #04
*/

#include <iostream>
using namespace std;

int main()
{
	double celsius;
	double fahrenheit;
	
	
	cout << "Enter a degree in Celsius: ";
	cin >> celsius;
	
	
	fahrenheit = ((9.0/5.0)* celsius) + 32;
	
	cout << celsius << "Celsius is " << fahrenheit << " Fahrenheit" << endl;
	return 0;

}

