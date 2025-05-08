#include <iostream>
using namespace std;

int main()
{
	int Calories[7][5] = {{90, 35, 60, 40, 90}, 
			     {80, 40, 35, 90, 60}, 
			     {70, 55, 40, 60, 80}, 
			     {50, 70, 65, 45, 70}, 
			     {95, 35, 61, 48, 38}, 
			     {82, 40, 38, 20, 65}, 
			     {75, 55, 45, 50, 77}};
			     
	for(int r = 0;r < 7;r++){ //row of 7 days
		int total = 0;
		float average;
		
		for(int c = 0;c < 5;c++){ //column of 5 person
			total += Calories[r][c]; //total up the calories for each day
			
		}
		average = total/5;
		cout << "The average calories for Day " << r+1 << " : " << average <<endl;
	}
	
	//To find and display the highest calorie for the third person
	int highest = 0;
	int day;
	for(int r = 0;r < 7;r++){
		if(Calories[r][2] > highest){
			highest = Calories[r][2];
			day = r;
		}
	}		
	cout << "The highest calories for the third person is " << highest << " on Day " << day + 1 << endl;
	return 0;
}

