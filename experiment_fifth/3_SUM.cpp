// #include "Solution.h"
// #include <unordered_map>
// #include <vector>

// using namespace std;

// vector<vector<int>> Solution::three_sum(vector<int> &A, vector<int> &B, vector<int> &C) {
//     unordered_map<int, vector<pair<int, int>>> sumMap;
//     vector<vector<int>> result;

//     // 存储 A[i] + B[j] 的和
//     for (int i = 0; i < A.size(); ++i) {
//         for (int j = 0; j < B.size(); ++j) {
//             int sum = A[i] + B[j];
//             sumMap[sum].emplace_back(i, j); // 存储索引对 (i, j)
//         }
//     }

//     // 遍历 C，查找 C[k] 是否可以和 A[i] + B[j] 匹配
//     for (int k = 0; k < C.size(); ++k) {
//         int target = C[k];
//         if (sumMap.find(target) != sumMap.end()) {
//             // 如果找到了，遍历所有对应的 (i, j) 对
//             for (const auto& pair : sumMap[target]) {
//                 int i = pair.first;
//                 int j = pair.second;
//                 result.push_back({A[i], B[j], C[k]}); // 添加到结果中
//             }
//         }
//     }

//     return result; // 返回结果
// }