/**
*@author Abdul hannan bin zainudin
* Matric no: 2118719
* Lab #5 Section #1
*/

#include <iostream>
using namespace std;
void isMultiple(int, int);

int main()
{
	int no1, no2;
	cout << "Enter two integers: ";
	cin >> no1 >> no2;
	isMultiple(no1, no2);
	
	return 0;

}

void isMultiple(int no1, int no2)
{
	 
	if (no2%no1 == 0)
		cout << "true";
	else
		cout << "false";		
}

