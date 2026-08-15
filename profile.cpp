#include <iostream>
#include <string>
using namespace std;

struct Profile {
	string name;
    	string course;
    	string email;
};

bool hasValidEmail(const string& email) {
    	return email.find('@') != string::npos && email.find('.') != string::npos;
}

void displayProfile(const Profile& profile) {
    	cout << "Name: " << profile.name << '\n';
    	cout << "Course: " << profile.course << '\n';
    	cout << "Email: " << profile.email << '\n';
}

void updateCourse(Profile& profile, const string& newCourse) {
   	 profile.course = newCourse;
}

bool isSupportedCourse(const string& course) {
    	return course == "Computer Science" ||
           	course == "Data Science" ||
           	course == "Information Technology";
}

int main() {
    	Profile profile{"Amaan", "Computer Science", "student@example.com"};
    	displayProfile(profile);

	if (hasValidEmail(profile.email)) {
   	 cout << "Email format is valid." << '\n';
	} else {
   	 cout << "Invalid email format." << '\n';

	updateCourse(profile, "Data Science");
	cout << "Updated course: " << profile.course << '\n';

	if (isSupportedCourse(profile.course)) {
    	cout << "Course is supported." << '\n';
	} else {
    	cout << "Course is not supported." << '\n';
}
}

    	return 0;
}