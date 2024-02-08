#include <iostream>

using namespace std;

int main()
{
    int year = 0;

    cin >> year;

    cout << ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) << endl;
}