#include<iostream>
using namespace std;

struct student {
	string studentName;
	int student_id;
	double CGPA;
	int part_no;
};

int main(){
	
	student finalyear_student[100]; //declare struct array for 100 students
	int counts = 0; 
	
	//
	for(int i = 0;i < 100;i++){
		cout << "Student name: ";
		cin >> ws;
		getline(cin,finalyear_student[i].studentName);
		cout << "Student ID: ";
		cin >> finalyear_student[i].student_id;
		cout << "Your CGPA: ";
		cin >> finalyear_student[i].CGPA;
		cout << "Which part? ";
		cin >> finalyear_student[i].part_no;
		
		//identify number of part 6 students with cgpa above 3.00
		if(finalyear_student[i].part_no == 6 && finalyear_student[i].CGPA > 3.00)
			counts++; //to count the number of student with above criteria
	}
	cout << "Number of part 6 students with CGPA above 3.00 = " << counts <<endl;
	
	return 0;
}
