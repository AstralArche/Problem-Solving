#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ios::sync_with_stdio(false);

    int N, num, max, min;

    cin >> N;

    cin >> num;

    max = min = num;

    for (int i = 1; i < N; i++)
    {
        cin >> num;

        if (max < num)
        {
            max = num;
        }

        if (min > num)
        {
            min = num;
        }
    }

    cout << min << " " << max << "\n";
}