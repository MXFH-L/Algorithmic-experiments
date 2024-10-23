// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// class TreasureHunter {
// private:
//     vector<vector<int>> graph;
//     vector<int> values;
//     vector<int> dp;
//     vector<bool> visited;

//     void dfs(int current, int last) //深度优先算法
//     {
//         visited[current] = true;
//         int sum = values[current];
//         for (int reach : graph[current]) {
//             if (!visited[reach] && reach != last) {
//                 dfs(reach, current);
//                 sum += max(dp[reach], 0); // 子节点可以选择不贡献负数价值
//             }
//         }
//         dp[current] = sum; // 更新dp数组
//     }

// public:
//     TreasureHunter(int r) : graph(r + 1), values(r + 1), dp(r + 1), visited(r + 1, false) {}//构造所需数据
//     void addEdge(int x, int y) {
//         graph[x].push_back(y);
//         graph[y].push_back(x);
//     }

//     void setValues(const vector<int>& vals) //调整索引格式
//     {
//         for (size_t i = 1; i <= vals.size(); ++i) {
//             values[i] = vals[i - 1];
//         }
//     }
//     int findMaxTreasure() {
//         dfs(1, 0); // 从节点1开始DFS
//         int ans = INT_MIN;//如果设为0，则特殊情况下无法找到最大价值
//         for (size_t i = 1; i < dp.size(); ++i) {
//             ans = max(ans, dp[i]);
//         }
//         return ans;
//     }
// };

// int main() {
//     int r;
//     cin >> r;
//     vector<int> values(r);
//     for (int i = 0; i < r; ++i) {
//         cin >> values[i];
//     }
    
//     TreasureHunter hunter(r);
//     hunter.setValues(values);
    
//     for (int i = 0; i < r - 1; ++i) {
//         int x, y;
//         cin >> x >> y;
//         hunter.addEdge(x, y);
//     }
    
//     int result = hunter.findMaxTreasure();
//     cout << result << endl;
//     return 0;
// }