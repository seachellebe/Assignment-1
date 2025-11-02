#include <iostream>
using namespace std;
int main() 
{
    int grade;
    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
            cout << "Remark: Excellent" << endl;
    }
    else if (grade >= 80 && grade <= 89) {
            cout << "Remark: Very Good" << endl;
    }
    else if (grade >= 75 && grade <= 79) {
            cout << "Remark: Satisfactory" << endl;
    }
    else if (grade >= 0 && grade < 75) {
            cout << "Remark: Fail" << endl;
    }
    else {
        cout << "Invalid grade entered." << endl;
        }
    return 0;
}