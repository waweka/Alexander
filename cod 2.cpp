
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    double b;
    double c;
    double x;
    cout << "a number = ";
    cin >> a;
    cout << "b number = ";
    cin >> b;
    cout << "c number = ";
    cin >> c;
    if ((b * b - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c) / (2 * a));
        cout << "1 number is = " << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c) / (2 * a));
        cout << "2 number is = " << x << endl;
    }
    else
    {
        cout << " Non" << endl;
    }

    return 0;
}
