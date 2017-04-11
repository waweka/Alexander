//это решение для задачи : в зале 18 рядов , в первом ряду 7 мест , в каждом последующем на 2 больше мест , надо найти сколько всего мест в зале.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, d, n, x, s;
    cout << " a =";
    cin >> a;
    cout << " d =";
    cin >> d;
    cout << " n =";
    cin >> n;
    if ((a + d * (n - 1)) >= 0)
    {
	x = a + d * (n - 1);
	cout << " your result = " << x << endl;
	s = (a + x) * n / 2;
	cout << " your result = " << s << endl;
    }
    else
    {
	cout << "sorry =) maybe you make mistake =)";
    }
    return 0;
}
