/**
*@author Abdul Hannan Bin Zainudin
* Matric no: 2118719
* Lab #1 Section #04
*/

#include <iostream>
using namespace std;

int main()
{
	int num, sum;
	float num1, num2, num3, num4;
	
	cout << "Enter a number between 0 and 1000: ";
	cin >> num;
	
	num1 = num%10;
	num = num/10;
	num2 = num%10; 
	num = num/10;
	num3 = num%10;
	num = num/10;
	num4 = num%10;
	num = num/10;
	sum = num1 + num2 + num3 + num4;
	
	cout << " The sum of the digits is " << sum;
	return 0;

}

