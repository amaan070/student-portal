#include <iostream>
using namespace std;

bool isDarkModeEnabled = true;
string language = "English";

int main() {
    	cout << "Dark mode: " << (isDarkModeEnabled ? "Enabled" : "Disabled") << endl;
	cout << "Language: " << language << endl;
    return 0;
}