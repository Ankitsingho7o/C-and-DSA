#include <iostream>

using namespace std;

int main()
{

    double a;
    int b;
    cin >> a >> b;
    double answer =1;

    for(int i=0; i<b;i++){
       answer = answer*a;

    }
    cout<<answer;
}
