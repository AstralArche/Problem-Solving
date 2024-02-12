#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);

    ios::sync_with_stdio(false);

    int N, v, count = 0;

    cin >> N;

    int nums[N];

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    cin >> v;

    for (int i = 0; i < N; i++)
    {
        if (nums[i] == v)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}