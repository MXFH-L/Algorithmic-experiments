// #include "Solution.h"
// vector<vector<int>> Solution::round_robin_schedule(int n) {
//     // 如此构造一个二维数组（ nxn 矩阵）
//     vector<vector<int> > ans;
//     for(int i=0; i<n; i++) {
//       ans.push_back(vector<int>(n, 0));
//     }
//     // 请在这里完成你的代码
//     if(n==1)
//     {
//         ans[0][0]=1;
//         return ans;
//     }
//         vector<vector<int>> sub_ans = round_robin_schedule(n / 2);
//         for (int i = 0; i < n / 2; ++i) {
//             for (int j = 0; j < n / 2; ++j) {
//                 ans[i][j] = sub_ans[i][j];
//                 ans[i + n / 2][j] = sub_ans[i][j] + n / 2;
//                 ans[i][j + n / 2] = sub_ans[i][j] + n / 2;
//                 ans[i + n / 2][j + n / 2] = sub_ans[i][j];
//             }
//         }
//     return ans;
//   }