#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = i;

        while (j <= n)
        {

            cout << i;
            j = j + 1;
        }
        cout << endl;
        i += 1;
    }
}