#include<iostream>
using namespace std;

int main()
{
    int digit, count = 0;
    cout << "Enter the number: ";
    cin >> digit;

    for (int i = digit; i > 0; i /= 10) {
        count++;
    }

    cout << "Total number of digits" << digit << " is : " << count << endl;
    
    return 0;
}