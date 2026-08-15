#include <iostream>
#include <string>
using namespace std;

bool validate(const string& username, const string& password) {
	return username == "2026201032" && password == "portal123";
}

string maskPassword(const string& password) {
    	return string(password.length(), '*');
}

bool isAccountLocked(int failedAttempts) {
   	return failedAttempts >= 3;
}

void logout() {
	cout << "Logged out successfully." << endl;
}

int main() {
	int failedAttemps = 0;
	
	while(failedAttempts < 3){
	
	string username, password;

    	cout << "Enter Username: ";
    	cin >> username;

    	cout << "Enter Password: ";
    	cin >> password;
	
	cout << "Password entered: " << maskPassword(password) << endl;

    	if (validate(username, password)) {
        	cout << "Login successful." << endl;
		break;
    	} 

	failedAttempts++;
	cout << "Invalid Credentials" << endl;

	if(isAccountLocked(failedAttempts)){
		cout<< "Account temporarily locked after 3 failed attempts" <<end;
	}
}
	
	logout();

    	return 0;
}