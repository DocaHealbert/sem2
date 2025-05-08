#include<iostream>
using namespace std;

int main(){
	 float sales[3][3] = {3000.00, 3500.00, 1850.00, 3500.00, 3200.00, 1950.00, 4000.00, 3530.00, 1880.00};
	 float totalSales[3] = {0};
	 
	 for(int r = 0;r < 3;r++){
	 	float total = 0;
	 	
	 		for(int c = 0;c < 3;c++){
	 			total += sales[r][c];
		 	}
		 	totalSales[r] = total;
	 }
	 
	 //DISPLAY TOTAL SALES FOR EACH MONTH (BY ROW)
	 cout << "BOOK\t\tMAGAZINE\tSTATIONARY\tTOTAL SALES" <<endl;
	 for(int r = 0;r < 3;r++){ //THREE MONTHS
	 	cout << sales[r][0] <<"\t\t" <<sales[r][1]<< "\t\t" <<sales[r][2] <<"\t\t" << totalSales[r] <<endl;
	 }
	 return 0;
}
