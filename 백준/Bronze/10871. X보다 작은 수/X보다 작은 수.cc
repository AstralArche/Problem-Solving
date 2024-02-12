#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ios::sync_with_stdio(false);

    int N, X, count = 0;

    cin >> N >> X;

    int A[N], result[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];

        if (A[i] < X)
        {
            result[count++] = A[i];
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (i != 0)
        {
            cout << " ";
        }

        cout << result[i];
    }

    return 0;
}