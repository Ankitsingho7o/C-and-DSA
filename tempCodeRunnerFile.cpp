#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int a;
cin>>a;
int answer=0;

while(a!=0){
int digit = a%10;
cout<<"in";
 answer = (answer*10)+digit;
  a= a/10;
}

cout<<answer;
}