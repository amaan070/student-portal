#include <iostream>
using namespace std;

bool isDarkModeEnabled = true;
string language = "English";
bool notificationsEnabled = true;

int main() {
    	cout << "Dark mode: " << (isDarkModeEnabled ? "Enabled" : "Disabled") << endl;
	cout << "Language: " << language << endl;

	cout << "Notifications: " << (notificationsEnabled ? "Enabled" : "Disabled") << endl;
    return 0;
}