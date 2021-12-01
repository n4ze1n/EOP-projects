/**
*@author Abdul Hannan Bin Zainudin
* Matric no: 2118719aq
* Lab #4 Section # 4
*/

#include <iostream>
using namespace std;

int main()
{
    int t = 1000000000, num, sum = 0, individualNumber;
    
    cout << "Enter an integer number: ";
    cin >> num;

    cout << "The individual digits are ";
    
     while(t)
	{
        individualNumber = num / t;
        
        if(individualNumber)
		{
            individualNumber %= 10;
            cout << individualNumber << " ";
            sum += individualNumber;
        }
        t /= 10;
    }
    
       cout << "\nThe sum of the individual numbers is: " << sum << endl;
    
	return 0;

}

