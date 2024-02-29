// find sum of all even no.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 2;
    while(i<n){
        cout<< "Sum of even no. : "<< i<<endl;
        i=i+2;
    }
}