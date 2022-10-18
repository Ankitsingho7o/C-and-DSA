#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    int answer = 0;

    // Second approach
    while (n!=0)
    {
        int bit = n&1;
        answer= (bit*pow(10,i))+answer;
        n=n>>1;
        i++;
    }
    cout<<answer;
    
    // First Approach
    // while(n!=0){
    //     int rem = n%2;
    //     answer = (rem* pow(10, i))+answer;
    //     n=n/2;
    //    i= i+1;
    // }
    // cout << answer;
}
