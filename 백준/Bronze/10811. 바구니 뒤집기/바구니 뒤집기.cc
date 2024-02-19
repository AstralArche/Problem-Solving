#include <iostream>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int box[N + 1];

    for (int i = 1; i <= N; i++)
    {
        box[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        int start, end;

        cin >> start >> end;

        for (int j = start, k = end; j <= k; j++, k--)
        {
            int temp = box[j];
            box[j] = box[k];
            box[k] = temp;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << box[i] << " ";
    }

    cout << "\n";
}