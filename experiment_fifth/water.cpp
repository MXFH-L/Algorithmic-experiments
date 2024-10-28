#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <tuple>

using namespace std;

int min_energy(int n, int a, vector<tuple<int, int, int>>& locations) {
    vector<long long> only_adapt_fj;  // Farmer John 能适应的地点力气
    vector<long long> only_adapt_cow;  // 奶牛能适应的地点力气
    vector<long long> both_adapt;
    for (const auto& loc : locations) {
        int s, f, c;
        tie(s, f, c) = loc;
        if (f == 1 && c == 0) {
            only_adapt_fj.push_back(s);
        }
        else if (c == 1 && f == 0) {
            only_adapt_cow.push_back(s);
        }
        else if (f == 1 && c == 1) {
            both_adapt.push_back(s);
        }
    }

    // 排序
    sort(only_adapt_fj.begin(), only_adapt_fj.end());
    sort(only_adapt_cow.begin(), only_adapt_cow.end());
    sort(both_adapt.begin(), both_adapt.end());

    // 前缀和
    size_t min_size = min(only_adapt_cow.size(), only_adapt_fj.size());
    vector<long long> apart_adapt_sum(min_size + 1, 0);

    for (size_t i = 1; i <= min_size; ++i) {
        apart_adapt_sum[i] = apart_adapt_sum[i - 1] + only_adapt_cow[i - 1] + only_adapt_fj[i - 1];
    }

    if (min_size + both_adapt.size() < static_cast<size_t>(a)) {
        return -1;
    }

    // 初始化最小力气为无穷大
    long long total_min_energy = 0;
    size_t apart_adapt_sum_index = 0;
    size_t both_adapt_index = 0;
    // 考虑组合选择
    for (int x = 1; x <= a; ++x) {
        if (apart_adapt_sum_index < apart_adapt_sum.size() && both_adapt_index < both_adapt.size()) {
            if (apart_adapt_sum[apart_adapt_sum_index] >= both_adapt[both_adapt_index]) {
                total_min_energy += both_adapt[both_adapt_index];
                both_adapt_index++;
            } else {
                total_min_energy += apart_adapt_sum[apart_adapt_sum_index];
                apart_adapt_sum_index++;
            }
        } else if (apart_adapt_sum_index >= apart_adapt_sum.size()) {
            total_min_energy += both_adapt[both_adapt_index];
            both_adapt_index++;
        } else if (both_adapt_index >= both_adapt.size()) {
            total_min_energy += apart_adapt_sum[apart_adapt_sum_index];
            apart_adapt_sum_index++;
        }
    }

    return total_min_energy;
}

int main() {
    int n, a;
    cin >> n >> a;
    vector<tuple<int, int, int>> locations(n);
    
    for (int i = 0; i < n; ++i) {
        int s, f, c;
        cin >> s >> f >> c;
        locations[i] = make_tuple(s, f, c);
    }

    int result = min_energy(n, a, locations);
    cout << result << endl;

    return 0;
}