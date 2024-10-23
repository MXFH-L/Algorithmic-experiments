// #include "Solution.h"
// #include <algorithm>
// #include <iostream>
// #include <vector>
// long long Solution::find_maximum_subarray(vector<int> &A) {
//     // 请在这里完成你的代码
//     if (A.empty()) return 0;
//     long long max_current = A[0];
//     long long max_global = A[0];
//     for (size_t i = 1; i < A.size(); ++i) {
//         max_current = std::max(static_cast<long long>(A[i]), max_current + A[i]);
//         max_global = std::max(max_global, max_current);
//     }//最长子序列和一定是正数开始正数结尾，如果最后长度为n，则前面n-1个数之和一定小于n个数之和
//     return max_global;  // 返回最大子序列和
// }
