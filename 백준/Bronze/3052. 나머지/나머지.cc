#include <iostream>

using namespace std;

int main()
{
    int remainder[42] = { 0, };
    int counter = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;

        cin >> num;

        remainder[num % 42]++;
    }

    for (int i = 0; i < sizeof(remainder) / sizeof(int); i++)
    {
        if (remainder[i] != 0)
        {
            counter++;
        }
    }

    cout << counter << "\n";
}