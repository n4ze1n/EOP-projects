
#include <iostream>
using namespace std;
int reverseDigit (int digit);

int main()
{
	int num, rev;

	cout << reverseDigit (-12345);
	return 0;

}
int reverseDigit (int num)
{
	int reverse=0, reminder;
	
	while(num!=0)
	{
		reminder = num%10;
		reverse = (reverse * 10) + reminder;
		num/=10;
		

	}
	
	return reverse;
	
}
