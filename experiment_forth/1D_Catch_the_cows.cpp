#include <iostream>
#include <vector>
#include <unordered_map>
#define int long long
using namespace std;

int findMaxSequence(int r, const vector<int>& tree) {
    unordered_map<int, vector<int>> valueToIndices;//相同成绩的牛马位置
    for (int i = 1; i <= r; i++) {
        valueToIndices[tree[i]].push_back(i);
    }

    vector<int> maxNum(r + 1, 0);
    unordered_map<int, int> occurrenceCount;//某一成绩的牛马出现的次数
    occurrenceCount[tree[1]]++;

    for (int i = 2; i <= r; i++) {
        occurrenceCount[tree[i]]++;//出现一次
        if (occurrenceCount[tree[i]] == 1) {//只出现一次则置为前一个位置的结果
            maxNum[i] = maxNum[i - 1];
        } 
        else {
            const auto& indices = valueToIndices[tree[i]];//该成绩牛马所有位置索引
            int count = occurrenceCount[tree[i]] - 2;//出现次数-1
            maxNum[i] = maxNum[i - 1];//初始化
            while (count >= 0) {
                int index = indices[count];//从第二次及以后的出现位置索引
                maxNum[i] = max(maxNum[index - 1] + (i - index + 1), maxNum[i]);//维护该位置及之前的牛马捕捉最大
                count--;
            }
        }
    }
    return maxNum[r];
}

signed main() {
    int r;
    cin >> r;//牛马数目
    vector<int> tre(r + 1, 0);
    for (int i = 1; i <= r; i++) {
        cin >> tre[i];//牛马成绩
    }
    cout << findMaxSequence(r, tre) << endl;
    return 0;
}