#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double angle = 0;
    double radians = 0;

    // constant of pi
    const double pi = 3.141592;

    // prompt asking the user to input angle
    cout << "Enter an angle value, in degrees" << endl;
    cout << "**";
    cin >> angle;

    // formula for degrees into radians
    radians = angle * pi / 180;
    cout << endl;

    // prototypes for sin() and cos()
    double a1 = sin(radians);
    double a2 = cos(radians);
    double a3 = tan(radians);

    // outputs answers
    cout << angle << " degrees = " << radians << " radians" << endl;
    cout << "sin(" << angle << ") = " << a1 << endl;
    cout << "cos(" << angle << ") = " << a2 << endl;
    cout << "tan(" << angle << ") = " << a3 << endl;

    return 0;
}
