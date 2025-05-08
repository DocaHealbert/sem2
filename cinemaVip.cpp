#include<iostream>
using namespace std;

int main(){
	int seatingNumbers[3][3] = {21, 32, 43, 14, 55, 67, 38, 49, 26};
	char seatType[3][3] = {0};
	int vipSeat = 0;
	
	for(int r = 0;r < 3;r++){
		
		for(int c = 0;c < 3;c++){
			if(seatingNumbers[r][c] >= 50){
			seatType[r][c] = 'V';
			vipSeat++;
		}
		else
			seatType[r][c] = 'R';
			
		//Display the seatType array
		cout << seatType[r][c] << " ";	
		}
		cout << endl;
		
	}
	//Display the total number of VIP seats
	cout << "Total VIP seats: " << vipSeat <<endl;
	return 0;
}
