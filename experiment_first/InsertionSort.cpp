// #include "InsertionSort.h"
// void InsertionSort::mysort(std::vector<int>& nums) {
//     int n = nums.size();
//     int i, key, j;
//     for (i = 1; i < n; i++) {
//         key = nums[i];  // 当前要插入的元素
//         j = i - 1;
//         // 将大于key的元素向后移动一位
//         while (j >= 0 && nums[j] > key) {
//             nums[j + 1] = nums[j];
//             j--;
//         }
//         nums[j + 1] = key;  // 在正确位置插入key
//     }
    
// }