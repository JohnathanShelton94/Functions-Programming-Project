// This program will provide the radius, circumference and area of a circle given the coordinates of its center point and a point on its circumference.


#include <iostream>
#include <cmath> 

using namespace std;

                // Function to calculate the distance between two points in the Cartesian plane
double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

                // Function to calculate the radius of the circle given center and a point on circumference
double calcRadius(double centerX, double centerY, double pointX, double pointY) {
    return calcDistance(centerX, centerY, pointX, pointY);
}

                // Function to calculate the circumference of the circle
double calcCircumference(double radius) {
    const double PI = 3.1416;
    return 2 * PI * radius;
}

                // Function to calculate the area of the circle
double calcArea(double radius) {
    const double PI = 3.1416;
    return PI * pow(radius, 2);
}

int main() {
    double centerX, centerY;                // Coordinates of the center of the circle
    double pointX, pointY;                  // Coordinates of a point on the circumference

                    // Input from the user
    cout << "Enter the coordinates of the center of the circle (x y) - Press enter after each coordinate: ";
    cin >> centerX >> centerY;
    cout << "Enter the coordinates of a point on the circumference (x y) - Press enter after each coordinate: ";
    cin >> pointX >> pointY;

                    // Calculate radius
    double radius = calcRadius(centerX, centerY, pointX, pointY);

                    // Output the results
    cout << "Radius of the circle: " << radius << endl;
    cout << "Circumference of the circle: " << calcCircumference(radius) << endl;
    cout << "Area of the circle: " << calcArea(radius) << endl;

    return 0;
}
