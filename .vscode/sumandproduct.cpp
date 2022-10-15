#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int sum = 0;
    int product = 1;

    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        // cout << "inside";

        sum = sum + rem;
        product = product * rem;
    }

    // cout << "Sum is " << sum << endl;
    // cout << "product is " << product << endl;
    cout << product - sum;
}