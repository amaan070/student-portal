#include <iostream>
#include <string>
using namespace std;

bool validate(const string& username, const string& password) {
    return username == "2026201032" && password == "portal123";
}

int main() {
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (validate(username, password)) {
        cout << "Login successful." << '\n';
    } else {
        cout << "Invalid username or password." << '\n';
    }

    return 0;
}