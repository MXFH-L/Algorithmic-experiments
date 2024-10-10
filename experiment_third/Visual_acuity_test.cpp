// #include <iostream>
// #include <vector>
// #include <deque>
// using namespace std;

// vector<int> sliding_Window_Maximum(int n, int k, vector<int>& nums) {
//     deque<int> deq;  
//     vector<int> maxValues;
//     for (int i = 0; i < n; ++i) {
//         //保证不在窗口内的元素不在队列中
//         if (!deq.empty() && deq.front() < i - k + 1) {
//             deq.pop_front();
//         }
//         // 保持队列中只存着窗口最大值的索引
//         while (!deq.empty() && nums[deq.back()] < nums[i]) {
//             deq.pop_back();
//         }
//         deq.push_back(i);

//         // 如果当前索引大于等于窗口大小，记录当前窗口的最大值
//         if (i >= k - 1) {
//             maxValues.push_back(nums[deq.front()]);
//         }
//     }
//     return maxValues;
// }

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> nums[i];
//     }

//     vector<int> result = sliding_Window_Maximum(n, k, nums);
//     // 输出结果
//     for (int maxValue : result) {
//         cout << maxValue << " ";
//     }
//     cout << endl;
//     return 0;
// }