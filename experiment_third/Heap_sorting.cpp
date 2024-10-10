// #include "HeapSort.h"
// void HeapSort::max_heapify(std::vector<int>& nums, int i) {
//     int left = 2 * i;
//     int right = 2 * i + 1;
//     int largest = i;
//     if (left <= length && nums[left] > nums[largest]) {
//         largest = left;
//     }
//     if (right <= length && nums[right] > nums[largest]) {
//         largest = right;
//     }
//     if (largest != i) {
//         swap(nums[i], nums[largest]);
//         max_heapify(nums, largest);
//     }
// }
// void HeapSort::build_max_heap(std::vector<int>& nums) {
//     // 请在这里完成你的代码
//     for(int i=length/2;i>=1;i--){
//         max_heapify(nums,i);
//     }
// }
// void HeapSort::mysort(std::vector<int>& nums) {
//     length = nums.size();
//     nums.insert(nums.begin(), 0); // 在开头插入一个元素，使得待排序元素下标从 1 开始
//     build_max_heap(nums);
//     for (int i = length; i >= 2; i--) {
//         swap(nums[1], nums[i]);
//         length--;
//         max_heapify(nums, 1);
//     }
//     nums.erase(nums.begin()); // 删除开头元素
// }