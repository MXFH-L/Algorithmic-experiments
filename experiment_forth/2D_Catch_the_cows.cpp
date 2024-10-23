// #include <iostream>
// #include <vector>
// using namespace std;

// long long maxCowsToCatch(const vector<int>& math_scores) {
//     int n = math_scores.size();
//     vector<vector<long long>> dp(n, vector<long long>(n, 0)); // 使用 long long 类型
//     for (int i = 0; i < n; i++) {
//         dp[i][i] = 1;
//     }
    
//     // 遍历所有可能的区间长度
//     for (int len = 2; len <= n; ++len) {
//         // 遍历所有可能的起始位置
//         for (int start = 0; start <= n - len; ++start) {
//             int end = start + len - 1;
//             if (math_scores[start] == math_scores[end]) {
//                 dp[start][end] = len;
//             } else {
//                 dp[start][end] = max(dp[start][end - 1], dp[start + 1][end]);
//                 // 尝试将当前区间分成两个子区间
//                 for (int k = start + 1; k < end - 1; ++k) {
//                     if (dp[start][k]!= 1 && dp[k + 1][end]!=1) 
//                     {
//                         dp[start][end] = max(dp[start][end], dp[start][k] + dp[k + 1][end]);
//                     }
//                 }
//             }
//         }
//     }

//     return dp[0][n-1];
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> math_scores(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> math_scores[i];
//     }

//     cout << maxCowsToCatch(math_scores) << endl;
//     return 0;
// }