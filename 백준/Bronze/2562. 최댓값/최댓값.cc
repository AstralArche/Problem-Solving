#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ios::sync_with_stdio(false);

    int position, num, max = -1;

    for (int i = 1; i <= 9; i++)
    {
        cin >> num;

        if (num > max)
        {
            max = num;

            position = i;
        }
    }

    cout << max << "\n" << position;
}