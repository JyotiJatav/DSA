#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {
        if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
            throw "Invalid triangle sides!";
        }
    }

    double calculateAreaRightAngle() {
        return 0.5 * side1 * side2;
    }

    double calculateAreaHeron() {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main() {
    double s1, s2, s3;
    cout << "Enter the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    try {
        Triangle triangle(s1, s2, s3);
        cout << "Area of the right-angled triangle: " << triangle.calculateAreaRightAngle() <<endl;
        cout << "Area of the triangle using Heron's formula: " << triangle.calculateAreaHeron() << endl;
    } catch (const char* msg) {
        std::cerr << "Error: " << msg <<endl;
    }

    return 0;
}