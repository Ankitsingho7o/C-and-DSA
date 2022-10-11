#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    int space = 0;
    while (i <= n)
    {
        space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;

        while (j <= i)
        {
            cout << j;

            j = j + 1;
        }
      int start= i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}

//  int i = 1;
//     int space = 0;
//     // int ex= n;
//     int co = 1;
//     while (i <= n)
//     {
//         space = n - i;
//         while (space)
//         {

//             cout << "*";
//             space = space - 1;
//         }
//         int j = 1;
//         // int ch = i;
//         while (j <= i)
//         {

//             cout << co;
//             // ch=ch+1;
//             co = co + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         // ex = ex - 1;
//         // space = space + 1;
//         i = i + 1;
//     }

//     int j=1;

//     while(j<=ex){
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     ex=ex-1;
//     i=i+1;
// }

// while (i <= n)
//     {

//         int j = 1;
//         space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }

//         while (j <= i)
//         {

//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }