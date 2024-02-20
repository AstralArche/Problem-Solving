#include <iostream>

using namespace std;

int main()
{
    int N, max = -1;
    double sum;

    cin >> N;

    double scores[1000];

    for (int i = 0 ; i < N; i++)
    {
        cin >> scores[i];

        if (max < scores[i])
        {
            max = scores[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        scores[i] *= 100. / max;
    }

    for (int i = 0; i < N; i++)
    {
        sum += scores[i];
    }

    cout << sum / N;
}