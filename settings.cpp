#include <iostream>
using namespace std;

bool isDarkModeEnabled = true;
string language = "English";
bool notificationsEnabled = true;
int sessionTimeout = 30;

int fontSize = 14;

int main() {
    	cout << "Dark mode: " << (isDarkModeEnabled ? "Enabled" : "Disabled") << endl;
	cout << "Language: " << language << endl;

	cout << "Notifications: " << (notificationsEnabled ? "Enabled" : "Disabled") << endl;

	cout << "Font size: " << fontSize << endl;
    return 0;
}