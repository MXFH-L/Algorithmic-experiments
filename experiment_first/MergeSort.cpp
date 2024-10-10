// #include "MergeSort.h"
    
// // 通过归并排序对int队列nums中的[left, right]区间进行升序排序
// // @param
// // nums: 完整的待排序队列，最终排序的结果应存放在nums中
// // left: 当前排序区间的左端点
// // right: 当前排序区间的右端点
// void MergeSort::merge_sort_aux(std::vector<int> &nums, int left, int right)
// {
//     if (left >= right)
//         return; // 返回单一元素或空数组
//     int mid = left + (right - left) / 2; // 找到中点
//     merge_sort_aux(nums, left, mid); // 排序左边一半
//     merge_sort_aux(nums, mid + 1, right); // 排序右边一半
//     vector<int> L(nums.begin() + left, nums.begin() + mid + 1);
//     vector<int> R(nums.begin() + mid + 1, nums.begin() + right + 1);

//     int i = 0, j = 0, k = left;
//     while (i < L.size() && j < R.size()) {
//         if (L[i] <= R[j]) {
//             nums[k++] = L[i++];
//         }
//         else {
//             nums[k++] = R[j++];
//         }
//     }

//     while (i < L.size()) {
//         nums[k++] = L[i++];
//     }

//     while (j < R.size()) {
//         nums[k++] = R[j++];
//     }
// }