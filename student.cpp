#include <iostream>
#include <string>
using namespace std;

struct Student {
	int rollNumber;
	string name;
	string course;
};

bool isStudentRollNumber(const Student& student, int rollNumber) {
    return student.rollNumber == rollNumber;
}

void displayStudent(const Student &student){
	cout<<"Roll Number: "<< student.rollNumber << endl;
	cout<<"Name: "<< student.name << endl;	
	cout<<"Course: "<< student.course << endl;
}

int main(){
	Student student{2026201032, "Amaan Ahmad", "M.TECH CSE"};
	displayStudent(student);

	int searchRollNo = 2026192203;
	
	if(isStudentRollNumber(student, searchRollNo)){
		cout<<"Student Found!" <<endl;
	}
	else{
	cout<<"Student Not Found!" <<endl;
	}

	return 0;
}