// #include "Solution.h"
// #include <numeric>
// #include <vector>

// std::vector<int> Solution::perfect_permutation(int n) {
//     std::vector<int> ans(n);
//     std::vector<int> temp(n);

//     // 生成初始排列
//     std::iota(ans.begin(), ans.end(), 1);
//     std::vector<std::pair<int, int>> stack;
//     stack.push_back({0, n - 1});
//     while (!stack.empty()) {
//         auto [l, r] = stack.back();
//         stack.pop_back();

//         if (l + 1 >= r)
//             continue;
//         // 复制ans到temp
//         for (int i = l; i <= r; i++) {
//             temp[i] = ans[i];
//         }
//         int i, j;
//         // 奇数位置元素先放回ans
//         for (i = l, j = l; j <= r; i++, j += 2) {
//             ans[i] = temp[j];
//         }
//         // 偶数位置元素再放回ans
//         for (j = l + 1; j <= r; i++, j += 2) {
//             ans[i] = temp[j];
//         }
//         // 将子区间压入栈中
//         stack.push_back({l, (l + r) / 2});
//         stack.push_back({(l + r) / 2 + 1, r});
//     }

//     return ans;
// }