#include <iostream>
using namespace std;

int main()
{
	int i, num1, num2, multiple3 = 0, multiple5 = 0;
	
	cout << "Enter two Integers: ";
	cin >> num1 >> num2;
	
	for (i = num1; i <= num2; i++)
	{
		
		if ( i%3 == 0)
		multiple3++;
			
		if ( i%5 == 0)	
		multiple5++;
		
		
	}
		
		cout << "the numbers of multiple 3: " << multiple3 <<endl;
		cout << "the numbers of multiple 5: " << multiple5 <<endl;
	return 0;

}

