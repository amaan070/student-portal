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

int main() {
    	Profile profile{"Amaan", "Computer Science", "student@example.com"};
    	displayProfile(profile);

	if (hasValidEmail(profile.email)) {
   	 cout << "Email format is valid." << '\n';
	} else {
   	 cout << "Invalid email format." << '\n';
}

    	return 0;
}