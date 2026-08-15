#include <iostream>
#include <string>
using namespace std;

bool validate(const string& username, const string& password) {
	return username == "2026201032" && password == "portal123";
}

string maskPassword(const string& password) {
    	return string(password.length(), '*');
}

void logout() {
	cout << "Logged out successfully." << '\n';
}

int main() {
	string username, password;

    	cout << "Enter Username: ";
    	cin >> username;

    	cout << "Enter Password: ";
    	cin >> password;
	
	cout << "Password entered: " << maskPassword(password) << '\n';

    	if (validate(username, password)) {
        	cout << "Login successful." << '\n';
    	} else {
        	cout << "Invalid username or password." << '\n';
    	}
	
	logout();

    	return 0;
}