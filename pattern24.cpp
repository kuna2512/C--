/*
1
22
333
4444
55555
666666
7777777
88888888
999999999
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row =1;
    while (row <=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col = col+1;
        }
        cout<<endl;
    row = row +1;
    }
    
}