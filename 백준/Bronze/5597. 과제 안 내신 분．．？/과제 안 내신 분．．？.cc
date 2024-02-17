#include <iostream>

using namespace std;

int main()
{
    const int student = 30;
    const int attend = 28;

    bool attendance[student] = { false, };

    for (int i = 0; i < attend; i++)
    {
        int num;
        cin >> num;

        attendance[num - 1] = true;
    }

    for (int i = 0; i < student; i++)
    {
        if (!attendance[i])
        {
            cout << i + 1 << "\n";
        }
    }
}