#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    int ex=1;

    while (i <= n)
    {
        int j = 1;
        // int ex=1;

        while (j <= i)
        {
            cout << ex
                 << "\t";
            ex=ex+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }}

    // Triangle

    // int ex =1;
    //      while (i <= n)
    //   {         int j = 1;

    //         while (j <= i)
    //        {
    //             cout << "*" << "\t";

    //             j = j + 1;
    //       }
    //         cout << endl;
    //         i = i + 1;

    // }

    // Counting Square

    //     while (i <= n)
    //     {
    //         int j = 1;

    //         while (j <= n)
    //         {
    //             cout << ex << "\t";
    //             ex= ex+1;
    //             j = j + 1;
    //         }
    //         cout << endl;
    //         i = i + 1;
    //     }
    // }