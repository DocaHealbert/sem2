#include<iostream>
using namespace std;

struct BirthRecord {
	string name;
	int day, month, year;
	int hour, minutes;	
};

int main(){
	BirthRecord person; //declarre struct variable
	
	//initialize data into struct
	person.name = "Ahmad Mustafa";
	person.day = 17;
	person.month = 12;
	person.year = 2001;
	person.hour = 9;
	person.minutes = 45;
	
	//display Birthrecord Information
	cout << "BIRTH RECORD INFORMATION" <<endl;
	cout << "==============================" <<endl;
	cout << "NAME : " <<person.name <<endl;
	cout << "DOB : " <<person.day <<"/"<<person.month <<"/"<<person.year <<endl;
	cout << "TOB : " <<person.hour << ":"<<person.minutes << " am" <<endl;
	
	return 0;
}
