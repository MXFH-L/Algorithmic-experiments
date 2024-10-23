// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// typedef long long ll;

// ll maxNonAdjacent(const vector<ll>& arr) {
//     if (arr.empty()) return 0;
//     int n = arr.size();
//     if (n == 1) return arr[0];
//     if (n == 2) return max(arr[0], arr[1]);

//     ll prev1 = arr[0];
//     ll prev2 = max(arr[0], arr[1]);

//     for (int i = 2; i < n; ++i) {
//         ll current = max(prev2, arr[i] + prev1);
//         prev1 = prev2;
//         prev2 = current;
//     }
//     return prev2;
// }

// ll maxScore(vector<ll>& points) {
//     if (points.empty()) return 0;  // 处理空输入
//     ll maxValue = *max_element(points.begin(), points.end());
//     vector<ll> sum(maxValue + 1, 0); // 使用最大得分 + 1 初始化sum

//     for (ll p: points)
//     {
//         sum[p] += p;
//     }

//     return maxNonAdjacent(sum);
// }

// int main() {
//     int numBalloons;
//     cin >> numBalloons; // 输入气球数量
//     vector<ll> scores(numBalloons);
//     for (int i = 0; i < numBalloons; ++i) {
//         cin >> scores[i]; // 输入气球得分
//     }

//     cout << maxScore(scores) << endl; // 输出最大得分
//     return 0;
// }