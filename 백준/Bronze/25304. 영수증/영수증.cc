#include <iostream>

using namespace std;

int main()
{
    unsigned int X, N, sum = 0;

    cin >> X >> N;

    for (int i = 0; i < N; i++)
    {
        unsigned int a, b;

        cin >> a >> b;

        sum += a * b;
    }

    if (sum == X)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}