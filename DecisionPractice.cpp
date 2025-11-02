#include <iostream>
using namespace std;
int main() 
{
    int grade, courseCode;
    cout << "Enter grade: ";
    cin >> grade;
    cout << "Enter course code: ";
    cin >> courseCode;

    if (grade >= 75) {
        cout << "Result: Pass" << endl;
    } else {
        cout << "Result: Fail" << endl;
    }

    switch (courseCode) {
        case 1: 
            cout << "Course: Data Structures and Algorithms" << endl;
            break;
        case 2:
            cout << "Course: Information Management" << endl;
            break;
        case 3:
            cout << "Course: Networking and Communications" << endl;
            break;
        default:
            cout << "Course: Unknown Course" << endl;
            break;
    }

    return 0;
}