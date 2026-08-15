#include <iostream>
#include <string>
using namespace std;

struct Student {
	int rollNumber;
	string name;
	string course;
};

void displayStudent(const Student &student){
	cout<<"Roll Number: "<< student.rollNumber << endl;
	cout<<"Name: "<< student.name << endl;	
	cout<<"Course: "<< student.course << endl;
}

int main(){
	Student student{2026201032, "Amaan Ahmad", "M.TECH CSE"};
	displayStudent(student);
	return 0;
}