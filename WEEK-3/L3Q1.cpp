/**
*@author Abdul Hannan Bin Zainudin
* Matric no: 2118719
* Lab #3 Section #4
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, temp;
	cout << "Insert three numbers: ";
	cin >> num1 >> num2 >> num3;
	
	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num2 > num3)
	{
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	cout << num1<<" " << num2 <<" " << num3;
			
	return 0;

}

