// #include "QuickSort.h"

// int QuickSort::partition(std::vector<int>& nums, int p, int q) {
//     // 请在这里完成你的代码
//     int randNum=p+rand()%(q-p);//随机选取一个元素作为主元
//     swap(nums[randNum],nums[p]);
//     int right=q;
//     int base =nums[p];
//     int left=p;
//     while(left<right){
//         while(left<right&&nums[right]>=base) right--;//从右向左找第一个小于主元的元素
//         while(left<right&&nums[left]<=base) left++;//从左向右找第一个大于主元的元素
//         if(left<right) swap(nums[left],nums[right]);
//     }
//     swap(nums[p],nums[right]);
//     return right;
// }

// void QuickSort::quick_sort(std::vector<int>& nums, int l, int r) {
//     // 请在这里完成你的代码
//     if(l<r)
//     {
//         int q=partition(nums,l,r);
//         quick_sort(nums,l,q-1);//递归
//         quick_sort(nums,q+1,r);
//     }
// }

// void QuickSort::mysort(std::vector<int>& nums) {
//     if(nums.size() == 0) 
//       return;
//     quick_sort(nums, 0, nums.size() - 1);
// }