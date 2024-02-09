#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int dice1, dice2, dice3;

    cin >> dice1 >> dice2 >> dice3;

    bool eqaul12 = dice1 == dice2, 
        eqaul13 = dice1 == dice3, 
        equal23 = dice2 == dice3;

    int price = 0;

    if (eqaul12 && eqaul13)
    {
        price = 10000 + dice1 * 1000;
    }
    else if (!eqaul12 && !eqaul13 && !equal23)
    {
        if (dice1 > dice2 && dice1 > dice3)
        {
            price = dice1 * 100;
        }
        else if (dice2 > dice1 && dice2 > dice3)
        {
            price = dice2 * 100;
        }
        else
        {
            price = dice3 * 100;
        }
    }
    else
    {
        if (eqaul12 || eqaul13)
        {
            price = 1000 + dice1 * 100;
        }
        else if (equal23)
        {
            price = 1000 + dice2 * 100;
        }
    }

    cout << price << endl;

    return 0;
}