#include <iostream>

using namespace std;

int main()
{
    int H, M;
    int duration;

    cin >> H >> M >> duration;

    M += duration;

    if (M >= 60)
    {
        H += M / 60;
        M %= 60;
    }

    if (H >= 24)
    {
        H %= 24;
    }

    cout << H << " " << M;

    return 0;
}