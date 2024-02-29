#include <iostream>
#include <vector>
#include <algorithm>

class Item2 {
public:
    int value, weight;
};

class fractionalKnapsack {
public:
    double fractionalKnapsack(int W, std::vector<Item>& arr, int n) {
        std::vector<std::pair<double, int>> v;
        for(int i = 0; i < n; i++) {
            double x = static_cast<double>(arr[i].value) / arr[i].weight;
            v.push_back({x, i});
        }
        std::sort(v.begin(), v.end(), std::greater<std::pair<double, int>>());
        
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
    std::cout << "Enter the capacity of the knapsack: ";
    std::cin >> W;
    std::cout << "Enter the number of items: ";
    std::cin >> n;

    std::vector<Item2> arr(n);
    std::cout << "Enter the values and weights of items:\n";
    for(int i = 0; i < n; i++) {
        std::cout << "Item " << i + 1 << ": ";
        std::cin >> arr[i].value >> arr[i].weight;
    }

    fractionalKnapsack obj;
    double maxValue = obj.fractionalKnapsack(W, arr, n);
    std::cout << "Maximum value in knapsack: " << maxValue << std::endl;

    return 0;
}
