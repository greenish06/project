#include<iostream>
using namespace std;
 
int main()
{
    int a,first_digit,last_digit,sum;
    cout<<"Enter the number of digit"<<endl;
    cin>>a;

    last_digit=a%10;

    while (a>=10)
    {
        a=a/10;
    }

    first_digit=a;
    sum=last_digit+first_digit;

    cout<<sum<<endl;
    
    return 0;
}