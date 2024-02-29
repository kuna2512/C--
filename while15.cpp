// write a program to check for no. is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=2;
     while(i<n){
       
       // divide ho jayega, not prime.
       if (n%i==0){
         cout<<"not prime"<<i<<endl;
       }
       else{
         cout<<"Prime for "<< i << endl;

       }
       i=i+1;
      }
}