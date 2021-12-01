#include <iostream>
using namespace std;
void displayPattern(int n);

int main()
{
	int n;
	n = 5;
	
	displayPattern( n);
		
	return 0;

}
void displayPattern(int n)
{
	int i,j;
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j  <= i; j++)
			cout << j << " " ;
			
		cout << endl;	
	}
	
	
}

