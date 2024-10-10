// #include "ThreeWayQuickSort.h"
// void ThreeWayQuickSort::three_way_quick_sort(std::vector<int>& nums, int p, int q) {
//     if (p >= q) { // 添加递归终止条件
//         return;
//     }
    
//     int i = p, j = p, k = q;
//     int randNum=p+rand()%(q-p);//随机选取一个元素作为主元
//     swap(nums[randNum],nums[p]);
//     int pivot = nums[p];
//     while (j <= k) {
//         if (nums[j] < pivot) {
//             std::swap(nums[i++], nums[j++]);
//         } else if (nums[j] > pivot) {
//             std::swap(nums[j], nums[k--]);
//         } else {
//             j++;
//         }
//     }
//     // 递归调用
//     three_way_quick_sort(nums, p, i - 1); // 左边部分
//     three_way_quick_sort(nums, k + 1, q); // 右边部分
// }

// void ThreeWayQuickSort::mysort(std::vector<int>& nums) {
//     if (nums.empty()) {
//         return;
//     }
//     three_way_quick_sort(nums, 0, nums.size() - 1);
// }