#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b) {
        return a[1] < b[1];
    });

    int take = 1;
    int endTime = v[0][1]; // Renamed variable 'end' to 'endTime'
    for(int i=1; i<n; i++){
        if (v[i][0] >= endTime){
            take++;
            endTime = v[i][1]; // Added missing semicolon
        }
    }
    cout << take << "\n";
    return 0;
}
