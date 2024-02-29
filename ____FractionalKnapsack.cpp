#include <bits/stdc++.h>
using namespace std;

class Item {
public:
    int value, weight;
};

class fractionalKnapsack {
public:
    double fractionalKnapsack(int W, Item arr[], int n) {
        vector<pair<double, int>> v;
        for(int i = 0; i < n; i++) {
            double x = static_cast<double>(arr[i].value) / arr[i].weight;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end(), greater<pair<double, int>>());
        
        int s = 0;
        double ans = 0;
        for(int i = 0; i < v.size(); i++) {
            if(s + arr[v[i].second].weight < W) {
                ans += arr[v[i].second].value;
                s += arr[v[i].second].weight;
            } else {
                double x = static_cast<double>(W - s);
                ans += (x * v[i].first);
                break;
            }
        }
        return ans;
    }
};

int main() {
    int W, n;
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;
    cout << "Enter the number of items: ";
    cin >> n;

    Item arr[n];
    cout << "Enter the values and weights of items:\n";
    for(int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> arr[i].value >> arr[i].weight;
    }

    fractionalKnapsack obj;
    double maxValue = obj.fractionalKnapsack(W, arr, n);
    cout << "Maximum value in knapsack: " << maxValue << endl;

    return 0;
}
