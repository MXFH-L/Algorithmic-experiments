// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
// #include <climits>

// using namespace std;

// int minPruningSteps(int n, int q, const vector<int>& heights) {
//     unordered_map<int, vector<int>> pruningCount;

//     for (int height : heights) {
//         int currentHeight = height;
//         int steps = 0;

//         // 记录从当前高度到0的所有修剪次数
//         while (currentHeight > 0) {
//             pruningCount[currentHeight].push_back(steps);
//             currentHeight /= 2; // 每次减半
//             steps++;
//         }
//     }

//     int minSteps = INT_MAX;

//     // 计算每个高度的修剪次数
//     for (const auto& entry : pruningCount) {
//         const vector<int>& counts = entry.second;

//         if (counts.size() >= static_cast<size_t>(q)) {
//             vector<int> sortedCounts = counts;
//             sort(sortedCounts.begin(), sortedCounts.end());
//             int totalSteps = 0;
//             // 取前q个最小的修剪次数
//             for (size_t i = 0; i < static_cast<size_t>(q); ++i) {
//                 totalSteps += sortedCounts[i];
//             }

//             minSteps = min(minSteps, totalSteps);
//         }
//     }

//     return minSteps == INT_MAX ? 0 : minSteps; // 如果没找到有效高度返回0
// }

// int main() {
//     int n, q;
//     cin >> n >> q;
//     vector<int> heights(n);

//     for (int i = 0; i < n; ++i) {
//         cin >> heights[i];
//     }

//     cout << minPruningSteps(n, q, heights) << endl;

//     return 0;
// }