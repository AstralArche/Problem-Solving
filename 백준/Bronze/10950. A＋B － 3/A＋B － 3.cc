#include <iostream>

using namespace std;

int main()
{
    int T;

    cin >> T;

    int numArr[T];

    for (int i = 0; i < T; i++)
    {
        int A, B;

        cin >> A >> B;

        numArr[i] = A + B;
    }

    for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++)
    {
        cout << numArr[i] << endl;
    }

    return 0;
}