// #include <iostream>
// #include <vector>

// using namespace std;

// long long countDuckDivisions(long long s) {
//     long long total_sum = s * (s + 1) / 2;
//     // 总和不能是奇数
//     if (total_sum % 2 != 0) {
//         return 0;
//     }
    
//     long long target = total_sum / 2;
//     vector<vector<long long>> dp(s + 1, vector<long long>(target + 1, 0));

//     // 初始化，和为 0 的组合有 1 种，即不选择任何小鸭
//     for (long long i = 0; i <= s; ++i) {
//         dp[i][0] = 1;
//     }

//     // 该问题为典型的背包问题，遍历背包容量为 j 的所有情况
//     for (long long i = 1; i <= s; ++i) {
//         for (long long j = 0; j <= target; ++j) {
//             dp[i][j] = dp[i - 1][j];  // 不选择当前的小鸭
//             if (j >= i) {
//                 dp[i][j] += dp[i - 1][j - i];  // 选择当前的小鸭
//             }
//         }
//     }

//     // 返回结果，每种分法会被计算两次，所以要除以 2
//     return dp[s][target] / 2;
// }

// int main() {
//     long long s;
//     cin >> s;
//     long long result = countDuckDivisions(s);
//     cout << result << endl;

//     return 0;
// }