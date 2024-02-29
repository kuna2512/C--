#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        int start, end; // Declaring both variables in a single line
        cin >> start >> end; // Taking both inputs in a single line
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b) { // Changed '&' to '&'
        return a[1] < b[1];
    });

    int take = 1; // Moved variable declaration inside main
    int endTime = v[0][1]; // Renamed variable 'end' to 'endTime' to avoid conflict with the keyword 'end'
    for(int i=1; i<n; i++){ // Fixed the loop iteration condition
        if (v[i][0] >= endTime){ // Renamed variable 'end' to 'endTime'
            take++;
            endTime = v[i][1]; // Added missing semicolon
        }
    }
    cout << take << "\n";
    return 0; // Added return statement to indicate successful termination of main function
}
