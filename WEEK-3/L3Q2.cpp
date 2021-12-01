#include <iostream>
using namespace std;

int main()
{
	int h;
	cout <<"enter the number of hours: ";
	cin >>h;
	
	if (h >= 0 && h <=3)
		cout << "your parking fee is: 5";
	else if (h > 3 && h <= 9)
		cout << "your parking fee is: " 
		<< 6*(static_cast<int>(h+1));
	
	else if (h > 9 && h <= 24)
		cout << "your parking fee is: 60";
		
	return 0;

}

