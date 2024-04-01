#include <iostream>

using namespace std;

int main()
{
    int r;
    cin >> r;

    int ratings[] = {1200, 1400, 1600, 1900, 2100, 2300, 2400, 2600, 3000};
    int higher[9];
    int count = 0;

    for(int i = 0; i < 9; ++i)
    {
        if(ratings[i] > r)
            higher[count++] = ratings[i];
    }

    if (count > 0)
    {
        cout << higher[0] << endl;
    }



    return 0;
}

