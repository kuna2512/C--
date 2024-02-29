// find sum of all odd no. 1 to n.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        cout << "sum of all odd no. :"<< i<<endl;
        i=i+2;
    }
}