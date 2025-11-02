#include <iostream>
using namespace std;    
int main()
{
    int choice;
    double radius, length, width, area;
    cout << "Menu Options:" << endl;
    cout << "1. Compute Area of Circle" << endl;
    cout << "2. Compute Area of Rectangle" << endl;
    cout << "3. Exit" << endl;
    cout << endl << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1: // Area of Circle
            cout << endl << "Enter radius of the circle: ";
                cin >> radius;
                area = 3.14159 * radius * radius;
                cout << "Area of Circle: " << area << endl;
            break;
        
        case 2: // Area of Rectangle
            cout << endl << "Enter length of the rectangle: ";
                cin >> length;
            cout << "Enter width of the rectangle: ";
                cin >> width;
                area = length * width;
                cout << "Area of Rectangle: " << area << endl;
            break;
        
        case 3: // Exit
            cout << endl << "Exiting the program." << endl;     
            break;

        default:
            cout << endl << "Invalid choice." << endl;
    }

    return 0;
}