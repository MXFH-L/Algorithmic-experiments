// #include "Solution.h"
// #include <algorithm>
// int Solution::assign_cake(vector<vector<int>>& g, vector<vector<int>>& s) {
//     // 自定义排序函数
//     // 下界排序，下界相同上界小的在内
//     auto cmp = [](const std::vector<int>& lth, const std::vector<int>& rth) {
//         return lth[0] == rth[0] ? lth[1] < rth[1] : lth[0] < rth[0];
//     };

//     // 对 g 和 s 进行排序
//     std::sort(g.begin(), g.end(), cmp);//确保优先满足嘴刁的
//     std::sort(s.begin(), s.end(), cmp);//确保先用小蛋糕，小蛋糕对应下界

//     int i = s.size() - 1, j;
//     int child = 0;

//     // 外层循环遍历蛋糕
//     while (i >= 0) {
//         j = g.size() - 1;//孩子数量
//         // 内层循环遍历孩子
//         while (j >= 0) {
//             if (s[i][1] < 1) {
//                 break;
//             } else if ((s[i][0] >= g[j][0]) && (s[i][0] <= g[j][1])) {
//                 child++;
//                 g.erase(g.begin() + j);
//                 s[i][1]--;
//             } else {
//                 j--;
//             }
//         }
//         i--;
//     }

//     return child;
// }