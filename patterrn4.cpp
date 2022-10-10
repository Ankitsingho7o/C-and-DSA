#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 1;
    // int ex;
      while (i <= n)
    {
        int j = 1;
        char start = 'A'+i-j;
        while (j <= n)
        {
            cout <<start<< "\t";
             j = j + 1;
             start=start+1;
        }
        cout << endl;

        i = i + 1;
    }


    return 0;
}




  




// int i= 0;
// // int ex=1;
// while(i<n){
//     int row =i;
//  int j=1;
// while (j<=n)
// {
//     cout<<char('A'+row)<<"\t";
//    j= j+1;
//    row=row+1;
// }
// cout<<endl;

// i=i+1;

// }