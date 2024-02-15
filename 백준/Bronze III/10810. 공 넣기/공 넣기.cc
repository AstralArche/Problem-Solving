#include <iostream>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int box[N];

    for (int i = 0; i < N; i++)
    {
        box[i] = 0;
    }

    for (int I = 0; I < M; I++)
    {
        int i, j, k;

        cin >> i >> j >> k;

        for (int J = i - 1; J < j; J++)
        {
            box[J] = k;
        }
    }

    cout << box[0];
    for (int i = 1; i < N; i++)
    {
        cout << " " << box[i];
    }
}