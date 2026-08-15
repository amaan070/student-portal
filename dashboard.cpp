#include <iostream>
using namespace std;

struct Dashboard {
    	int courses;
    	int assignments;
    	int completedAssignments;
};

void displayDashboard(const Dashboard& dashboard) {
   	cout << "Courses: " << dashboard.courses << endl;
    	cout << "Assignments: " << dashboard.assignments << endl;
    	cout << "Completed Assignments: " << dashboard.completedAssignments << endl;
}

double calculateCompletion(const Dashboard& dashboard) {
    	if (dashboard.assignments == 0) {
        	return 0.0;
   	 }

    	return (static_cast<double>(dashboard.completedAssignments)/ dashboard.assignments) * 100.0;
}

int main() {
   	 Dashboard dashboard{4, 6, 4};
   	 displayDashboard(dashboard);

	cout << "Assignment Completion: " << calculateCompletion(dashboard) << "%" << endl;

    return 0;
}