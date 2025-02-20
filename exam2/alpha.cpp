#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter Your alphabet" <<endl;
    cin>>ch;
    do {
        cout << ch << " ";  
        ch += 4; 
    } while (ch <= 'z');  
    return 0;
}