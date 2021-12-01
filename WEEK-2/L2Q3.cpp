/**
*@author Abdul Hannan Bin Zainudin
* Matric no: 2118719
* Lab #1 Section #4
*/  
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double x,y, elapse_time, total_distance_A, total_distance_B, shrt_distnc;
	int elapse_time_hr, elapse_time_min;
	
	cout << "Enter the average speed of car A: ";
	cin >> x;
	
	cout << "Enter the average speed of car B: ";
	cin >> y;
	
	cout << "Enter the elapse time(in hours & minutes) seperated by SPACE: ";
	cin >> elapse_time_hr >> elapse_time_min ;
	
	elapse_time = (elapse_time_min/60.0) + elapse_time_hr;
	
	total_distance_A = x*elapse_time;
	total_distance_B = y*elapse_time;
	
	shrt_distnc = sqrt((total_distance_A + total_distance_A) + (total_distance_B + total_distance_B));
	
	cout << fixed << showpoint;  
	cout << setprecision(2);
	cout << "The average speed of car A: " << x << " miles per hour" <<endl;	
	cout << "The average speed of car B: " << y << " miles per hour" <<endl;	
	cout << "The elapse time: " << elapse_time << " hours"<<endl;
	cout << "The shortest distance between the cars: " << shrt_distnc << " miles";
	
	return 0;

}

