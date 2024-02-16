#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ios::sync_with_stdio(false);

    int N, M;

    cin >> N >> M;

    int box[N];

    for (int i = 0; i < N; i++)
    {
        box[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        int num1, num2;

        cin >> num1 >> num2;

        num1--, num2--;

        int temp = box[num1];
        box[num1] = box[num2];
        box[num2] = temp;
    }

    cout << box[0];
    for (int i = 1; i < N; i++)
    {
        cout << " " << box[i];
    }
}