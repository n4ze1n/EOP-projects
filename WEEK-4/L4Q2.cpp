#include <iostream>
using namespace std;

int main()
{
	int score;
	
	
	while(score != -1)
	{
	cout << "Enter your score: ";
	cin >> score;
	
	if (score >= 60 && score <=100)
	cout << "You pass the exam\n";
	
	else if (score <= 60 && score >= 0)
	cout << "You dont't pass the exam\n";
	}
	
	cout << "No numbers are entered except -1";

	return 0;

}

