#include<iostream>
using namespace std;

void weather_forecast(float high1, float high2); //prototype

int main(){
	
	float *pointer_temperature = new float[10];
	float total;
	
	for(int i = 0;i < 10;i++){
		
		cout << "Enter temperature for hour " << i+1 << " : ";
		cin >> pointer_temperature[i];
		
		total += pointer_temperature[i];
	}
	float average = total/10;
	cout << "Average temperature for the day is " << average <<endl;
	
	//Declare 2d
	float temperature1[5][2] = {24.6, 29.6, 24.8, 30.5, 25.3, 31.4, 24.3, 29.8, 24.8, 27.8};
	//Display 2d Array dalm bentuk table
	for(int r = 0;r < 5;r++){
		
		for(int c = 0;c < 2;c++){
			
			cout << temperature1[r][c] << "  ";
		}
		cout << endl;
	}
	
	//Find highest temperature in each column
	float high1 = 0, high2 = 0;
	for(int r = 0;r < 5;r++){
		
		for(int c = 0;c < 2;c++){
			
			if(temperature1[r][c] > high1)
				high1 = temperature1[r][c];
		}
		
		for(int c = 1;c < 2;c++){
			
			if(temperature1[r][c] > high2)
				high2 = temperature1[r][c];
		}
	}
	weather_forecast(high1, high2); //call
	return 0;
}

void weather_forecast(float high1, float high2){
	
	if(high1 > high2)
		cout << "Cold" <<endl;
	
	else if(high2 > high1)
		cout << "Hot" <<endl;
	
	else
		cout << "Chill" <<endl;
}
