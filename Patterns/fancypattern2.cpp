#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows" << endl;
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
                cout << i + 1;
            else
                cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2 * (row - i) - 1; j++)
        {
            if (j % 2 == 0)
                cout << row - i;

            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}