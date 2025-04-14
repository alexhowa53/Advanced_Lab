#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;
using namespace shapes;

int main() {
    int choice;
    
    while (true) {
        cout << "\nSelect an option:\n";
        cout << "1. Calculate area of a square\n";
        cout << "2. Calculate area of a triangle\n";
        cout << "3. Calculate area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 4) break;
        
        switch (choice) {
            case 1: {
                float side;
                cout << "Enter side length of square: ";
                cin >> side;
                Square square(side);
                cout << "Area: " << Area::calculateArea(square) << endl;
                break;
            }
            case 2: {
                float base, height;
                cout << "Enter base of triangle: ";
                cin >> base;
                cout << "Enter height of triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case 3: {
                float radius;
                cout << "Enter radius of circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area: " << Area::calculateArea(circle) << endl;
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    
    return 0;
}