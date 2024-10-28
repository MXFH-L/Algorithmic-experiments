// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void processOverlappingIntervals(int numIntervals, int maxLoad, const vector<pair<int, int>>& intervals, vector<int>& removedIntervals) {
//     vector<int> load(201);
//     vector<vector<int>> overlap(201);
//     vector<bool> isRemoved(numIntervals, false);

//     // 初始化 load 和 overlap
//     for (int i = 0; i < numIntervals; ++i) {
//         int start = intervals[i].first;
//         int end = intervals[i].second;
//         for (int j = start; j <= end; ++j) {
//             load[j]++;
//             overlap[j].push_back(i);
//         }
//     }

//     // 处理重叠区间
//     for (int i = 1; i <= 200; ++i) {
//         while (load[i] > maxLoad) {
//             int maxInterval = -1;
//             int maxCoverage = 0;
//             for (int interval : overlap[i]) {//找到最大覆盖的钢板
//                 if (!isRemoved[interval]) {
//                     int coverage = intervals[interval].second - i + 1;
//                     if (coverage > maxCoverage) {
//                         maxInterval = interval;
//                         maxCoverage = coverage;
//                     }
//                 }
//             }
//             isRemoved[maxInterval] = true;
//             removedIntervals.push_back(maxInterval + 1);
//             for (int j = intervals[maxInterval].first; j <= intervals[maxInterval].second; ++j) {
//                 load[j]--;
//             }
//         }
//     }
// }

// int main() {
//     int numIntervals, maxLoad;
//     cin >> numIntervals >> maxLoad;

//     vector<pair<int, int>> intervals(numIntervals);
//     for (int i = 0; i < numIntervals; ++i) {
//         int start, end;
//         cin >> start >> end;
//         intervals[i] = {start, end};
//     }

//     vector<int> removedIntervals;
//     processOverlappingIntervals(numIntervals, maxLoad, intervals, removedIntervals);

//     cout << removedIntervals.size() << endl;
//     for (int interval : removedIntervals) {
//         cout << interval << " ";
//     }
//     cout << endl;

//     return 0;
// }