#include <iostream>
using namespace std;

struct Dashboard {
    	int courses;
    	int assignments;
    	int completedAssignments;
};

void displayDashboard(const Dashboard& dashboard) {
   	 cout << "Courses: " << dashboard.courses << '\n';
    	cout << "Assignments: " << dashboard.assignments << '\n';
    	cout << "Completed Assignments: " << dashboard.completedAssignments << '\n';
}

int main() {
    Dashboard dashboard{4, 6, 4};
    displayDashboard(dashboard);

    return 0;
}