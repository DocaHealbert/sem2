#include<iostream>
using namespace std;

void mulSame(int firstGroup[6], int secondGroup[6]); //prototype

void mulSame(int firstGroup[6], int secondGroup[6]){
	
	int Group[6] = {0};
	
	for(int x = 0;x < 6;x++){
		
		if(firstGroup[x] % 2 == 0 && secondGroup[x] % 2 == 0) //tentukan nombor genap
		{
			Group[x] = firstGroup[x] * secondGroup[x]; //jika genap, darabkan
		}
		cout << Group[x] << " ";
	}
	
}

int main(){
	
	int firstGroup[6] = {6, 5, 2, 3, 4, 9};
	int secondGroup[6] = {36, 20, 4, 9, 18, 25};
	
	mulSame(firstGroup, secondGroup); //function call
	
	return 0;
}
