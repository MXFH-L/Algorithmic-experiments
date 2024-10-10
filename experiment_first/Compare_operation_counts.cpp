// #include <iostream>
// #include <vector>

// using namespace std;

// // 插入排序比较次数计算
// int insertionSort(vector<int>& arr) {
//     int comparisons = 0;
//     for (int i = 1; i < static_cast<int>(arr.size()); ++i) {  // 显式转换
//         int j = i - 1;
//         int temp = arr[i];
//         while (j >= 0 && arr[j] > temp) {
//             comparisons++;
//             arr[j + 1] = arr[j];
//             --j;
//         }
//         // 如果没有发生移动，说明没有比较
//         if (j >= 0) comparisons++;
//         arr[j + 1] = temp;
//     }
//     return comparisons;
// }

// // 归并排序辅助函数
// void merge(vector<int>& arr, int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;

//     vector<int> L(n1), R(n2);

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];

//     int i = 0, j = 0, k = l;

//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// // 归并排序比较次数计算
// int mergeSort(vector<int>& arr, int l, int r, int& comparisons) {
//     if (l < r) {
//         int m = l + (r - l) / 2;
//         mergeSort(arr, l, m, comparisons);
//         mergeSort(arr, m + 1, r, comparisons);

//         // 比较次数为左右两侧的元素数量总和
//         comparisons += (r - l + 1);
//         merge(arr, l, m, r);
//     }
//     return comparisons;
// }

// int main() {
//     int N;
//     cin >> N;
//     vector<int> arr(N);
//     for (int i = 0; i < N; ++i)
//         cin >> arr[i];

//     // 复制原始数组用于不同的排序算法
//     vector<int> arrCopy = arr;

//     int insertComp = insertionSort(arr);
//     int mergeComp = 0;
//     mergeSort(arrCopy, 0, N - 1, mergeComp);

//     cout << mergeComp << " " << insertComp << endl;

//     return 0;
// }