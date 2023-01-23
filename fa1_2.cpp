#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void menu() {
    cout << "****************************************" << endl;
    cout << setw(22) << "MENU \n";
    cout << "****************************************" << endl;
    cout << "[1] Area of square" << endl;
    cout << "[2] Area of rectangle" << endl;
    cout << "[3] Area of triangle" << endl;
    cout << "[4] Area of circle" << endl;
    cout << "[5] Exit" << endl;
}

double squareArea(double side) {
    return side * side;
}

double rectangleArea(double length, double width) {
    return length * width;
}

double triangleArea(double base, double height) {
    return (base * height) / 2;
}

double circleArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    int choice;
    double side, base, height, length, width, radius;
    do {
        menu();
        cout << "--------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "--------------------" << endl;

        switch(choice) {
            case 1:
                cout << "Enter the side of the square: ";
                cin >> side;
                cout << "The area is " << squareArea(side) << " sq. units" << endl;
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "The area is " << rectangleArea(length, width) << " sq. units" << endl;
                break;
            case 3:
                cout << "Enter the base and height of triangle: ";
                cin >> base >> height;
                cout << "The area is " << triangleArea(base, height) << " sq. units" << endl;
                break;
            case 4:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "The area is " << circleArea(radius) << " sq. units" << endl;
                break;
            case 5:
                cout << "Thank you." << endl;
                cout << "Press any key to continue. . ." << endl;
                break;
            default:
                cout << "Invalid input! Choose 1-5 only. \n" << endl;
                break;
        }
    }
    while(choice != 5);

    return 0;
}
