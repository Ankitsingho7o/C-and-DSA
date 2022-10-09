#include <iostream>
using namespace std;

int main()
{

    //    char a;
    int n;
    cin >> n;
    int i = 1;
    // char a ='a';

    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout <<char('A'+i-1)<<"\t";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}