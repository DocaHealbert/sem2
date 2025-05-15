#include<iostream>
using namespace std;

float calculateAverage(float arrayQuiz[], int size); //prototype
void findHighestQuiz(float arrayQuiz[], int size, float& highestQuizMark);

float calculateAverage(float arrayQuiz[], int size){
	
	int sum = 0;
	float average;
	
	for(int x = 0;x < size;x++){
		
		sum += arrayQuiz[x];
		
	}
	average = sum/size;
	return average;
}

void findHighestQuiz(float arrayQuiz[], int size, float& highestQuizMark){
	
	highestQuizMark = 0;
	
	for(int x = 0;x < size;x++){
		
		if(arrayQuiz[x] > highestQuizMark)
			highestQuizMark = arrayQuiz[x];
	}
}

int main(){
	
	char sname[25];
	float arrayQuiz[6];
	int size = 6;
	float average, highestQuizMark;
	
	cout << "Enter student name: ";
	cin.getline(sname, 25);
	
	for(int i = 0;i < size;i++){
		
		cout << "Enter the quiz mark: " <<i+1 << " : ";
		cin >> arrayQuiz[i];
	}
	
	cout << "\nName: " << sname <<endl <<endl;
	
	for(int i = 0;i < 6;i++){
		
		cout << "Quiz " << i+1 << "\t";
	}
	cout << endl;
	//Display Quiz mark
	for(int i = 0;i < 6;i++){
		
		cout << arrayQuiz[i] << "\t";
	}
	average = calculateAverage(arrayQuiz, size); //function call
	cout << "\n\nAverage mark is: " <<average <<endl;
	findHighestQuiz(arrayQuiz, size, highestQuizMark); //function call
	cout << "The highest mark is " <<highestQuizMark <<endl;
	
	return 0;
}
