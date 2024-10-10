// #include <iostream>
// #include <vector>

// using namespace std;

// typedef long long ll;

// // 归并排序辅助函数，同时计算逆序对数量
// ll merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
//     int i = left, j = mid + 1, k = left;
//     ll count = 0;

//     while ((i <= mid) && (j <= right)) {
//         if (arr[i] <= arr[j]) {
//             temp[k++] = arr[i++];
//         } else {
//             temp[k++] = arr[j++];
//             count += (mid - i + 1); // 当前j与左侧剩余元素都构成逆序对
//         }
//     }

//     while (i <= mid) {
//         temp[k++] = arr[i++];
//     }

//     while (j <= right) {
//         temp[k++] = arr[j++];
//     }

//     for (i = left; i <= right; i++) {
//         arr[i] = temp[i];
//     }

//     return count;
// }

// // 归并排序主函数，同时计算逆序对数量
// ll mergeSort(vector<int>& arr, vector<int>& temp, int left, int right) {
//     ll count = 0;
//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         count += mergeSort(arr, temp, left, mid);
//         count += mergeSort(arr, temp, mid + 1, right);
//         count += merge(arr, temp, left, mid, right);
//     }
//     return count;
// }

// int main() {
//     int N;
//     cin >> N;
//     vector<int> arr(N);
//     vector<int> temp(N); // 临时数组用于存储合并结果

//     for (int i = 0; i < N; ++i)
//         cin >> arr[i];

//     ll inversions = mergeSort(arr, temp, 0, N - 1);

//     cout << inversions << endl;

//     return 0;
// }