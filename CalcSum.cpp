#include<iostream>
using namespace std;

int CalcSum(int ArrayA[4], int ArrayB[4]){
	
	int sum = 0;
	
	for(int x = 0;x < 4;x++){
		
		sum += (ArrayA[x] + ArrayB[x]);
	}
	return sum;
}

int main(){
	
	int ArrayA[4] = {23, 32, 45, 76};
	int ArrayB[4] = {15, 21, 30, 44};
	int sum;
	
	sum = CalcSum(ArrayA, ArrayB); //function call
	
	cout << "SUM = " << sum <<endl;
	
	return 0;
}
