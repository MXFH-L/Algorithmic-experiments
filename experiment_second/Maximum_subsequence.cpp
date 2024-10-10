// #include "Solution.h"
// int Solution::find_maximum_crossing_subarray(vector<int> &A, int low, int mid, int high) {
//     // 请在这里完成你的代码
//     int left_sum = INT_MIN;
//     int sum = 0;
//     for(int i=mid;i>=low;i--){
//         sum+=A[i];
//         if(sum>left_sum)
//             left_sum=sum;
//     }
//     int right_sum = INT_MIN;
//     sum=0;
//     for(int i=mid+1;i<=high;i++){
//         sum+=A[i];
//         if(sum>right_sum)
//             right_sum=sum;
//     }
//     return left_sum+right_sum;
    
// }
// int Solution::find_maximum_subarray(vector<int> &A, int low, int high) {
//     // 请在这里完成你的代码
//     if(low==high)
//         return A[low];
//     int left_sum = find_maximum_subarray(A, low,(low+high)/2);
//     int right_sum = find_maximum_subarray(A,(low+high)/2+1,high);    
//     int cross=find_maximum_crossing_subarray(A,low,(low+high)/2,high);
//     return max(left_sum,max(right_sum,cross));
// }