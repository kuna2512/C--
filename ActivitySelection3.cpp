#include <bits/stdc++.h>
using namespace std;

class ActivitySelection1 {
public:
    static bool comp(pair<int,int> a, pair<int,int> b) {
        if (a.second == b.second) 
            return a.first < b.first;
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n) {
        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++) 
            v[i] = {start[i], end[i]};
        
        sort(v.begin(), v.end(), comp);
        
        int i = 0;
        int j = 1;
        int c = 1;
        while (j < n) {
            if (v[i].second < v[j].first) {
                c++;
                i = j;
            }
            j++;
        }
        return c;
    }
};

int main() {
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;
    
    int start[n], end[n];
    cout << "Enter the start and end times of activities:\n";
    for (int i = 0; i < n; i++)
        cin >> start[i] >> end[i];
    
    ActivitySelection1 obj;
    cout << "Maximum number of meetings: " << obj.maxMeetings(start, end, n) << endl;
    
    return 0;
}
