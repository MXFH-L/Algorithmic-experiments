// #include "Solution.h"
// #include <vector>
// #include <string>
// #include <algorithm>
// int Solution::lcs(std::string s, std::string t, std::vector<std::vector<int>> &c, std::vector<std::vector<int>> &b) {
//     int n = s.size(), m = t.size();
//     c.resize(n + 1);
//     b.resize(n + 1);
//     for (int i = 0; i <= n; i++) {
//         c[i].resize(m + 1, 0);
//         b[i].resize(m + 1, 0);
//     }
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (s[i - 1] == t[j - 1]) {
//                 c[i][j] = c[i - 1][j - 1] + 1;//统计到此位置的最长公共子序列的长度
//             } else {
//                 if (c[i - 1][j] >= c[i][j - 1]) {//在不相等的情况下，比较两个方向的长度，取较大的
//                     c[i][j] = c[i - 1][j];
//                 } else {
//                     c[i][j] = c[i][j - 1];
//                 }
//             }
//         }
//     }
//     // 返回最长公共子序列的长度
//     return c[n][m];//不需要b去完成任务
// }