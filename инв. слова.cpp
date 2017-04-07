#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    cout << "write your word " << endl;

    do
    {
	cin >> str;
	for (int u = str.length(); u >= 0; u--)
	{
	    cout << str[u];
	}
    } while (str != "#");
    return 0;
}
