#include <iostream>
using namespace std;
int main() 
{ 
    int a;
    cout<<"Enter the vaule of a : ";
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cout << "Hello, World!" <<endl;
        cout<<"Value of a : "<<a<<"\n";
        a +=20;
    }

    
    return 0;
}
