// #include <iostream>
// #include <cmath>
// using namespace std;

// class RangeCounter {
// public:
//     // 计算在给定范围内满足条件的个数
//     unsigned long long countInRange(unsigned long long totalElements, unsigned long long key, unsigned long long rangeEnd, unsigned long long startRange, unsigned long long endRange) {
//         if(totalElements == 0) {
//             return 0;
//         }
//         else if(totalElements == 1) {
//             return (key >= startRange && rangeEnd <= endRange) ? 1 : 0;
//         }
//         else if(startRange == endRange) {
//             return 1;
//         }
        
//         unsigned long long mid = (startRange + endRange) / 2;
//         unsigned long long result = 0;
        
//         if(key < mid) {
//             result += countInRange(totalElements / 2, key, min(rangeEnd, mid - 1), startRange, mid - 1);
//         }
//         if(rangeEnd > mid) {
//             result += countInRange(totalElements / 2, max(mid + 1, key), rangeEnd, mid + 1, endRange);
//         }
//         if(key <= mid && rangeEnd >= mid) {
//             result += totalElements % 2;
//         }
        
//         return result;
//     }

//     // 解决问题的主要函数
//     void solve() {
//         unsigned long long totalElements, key, rangeEnd;
//         cin >> totalElements >> key >> rangeEnd;
        
//         unsigned long long current = totalElements;
//         unsigned long long levels = 0;
//         while(current != 1 && current != 0) {
//             current /= 2;
//             levels++;
//         }

//         unsigned long long length = 2 * pow(2, levels) - 1;
//         cout << countInRange(totalElements, key, rangeEnd, 1, length) << endl;
//     }
// };

// signed main() {
//     RangeCounter counter;
//     counter.solve();
//     return 0;
// }