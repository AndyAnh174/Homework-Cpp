#include <iostream>
#include <cmath>

void calculateAngleABC(double xa, double ya, double xb, double yb, double xc, double yc) {
    double AB = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
    double BC = sqrt(pow(xc - xb, 2) + pow(yc - yb, 2));
    double AC = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));

    double cosABC = (pow(AB, 2) + pow(BC, 2) - pow(AC, 2)) / (2 * AB * BC);
    double angleABC = acos(cosABC) * 180 / M_PI;

    std::cout << "Angle ABC: " << angleABC << " degrees" << std::endl;
}

int main() {
    double xa, ya, xb, yb, xc, yc;

    std::cout << "Enter point A(xa, ya): ";
    std::cin >> xa >> ya;

    std::cout << "Enter point B(xb, yb): ";
    std::cin >> xb >> yb;

    std::cout << "Enter point C(xc, yc): ";
    std::cin >> xc >> yc;

    calculateAngleABC(xa, ya, xb, yb, xc, yc);

    return 0;
}