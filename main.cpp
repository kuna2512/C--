#include <iostream>
using namespace std;
int main() 
{ 
    int a;
    cout<<"Enter the vaule of a : ";
    cin>>a;
    cout << "Hello, World!" <<endl;
    for (int i = 0; i < 100; i++)
    {
        cout<<"Value of a : "<<a<<"\n";
        a +=20;
    }
    
    return 0;
}
