#include <iostream>
#include <string>
using namespace std;

struct Profile {
	string name;
    	string course;
    	string email;
};

void displayProfile(const Profile& profile) {
    	cout << "Name: " << profile.name << '\n';
    	cout << "Course: " << profile.course << '\n';
    	cout << "Email: " << profile.email << '\n';
}

int main() {
    	Profile profile{"Amaan", "Computer Science", "student@example.com"};
    	displayProfile(profile);

    	return 0;
}