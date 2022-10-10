#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int row = 1;
    int space =0;
    while (row <= n)
    {
        // int space = s - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
           space=space+row;
        int cl = 0;

        while (cl <= n - row)
        {
            cout << "*";
            cl = cl + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}

//  int ex = n;

//     int row = 1;

//     while (row <= n)
//     {

//         int col = 1;
//         while (col <= n-row)
//         {
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         // ex = ex - 1;
//         row = row + 1;
//     }