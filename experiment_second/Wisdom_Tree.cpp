// #include <vector>
// #include <iostream>
// #include <cmath>
// using namespace std;

// class Wisdom_tree {
// public:
//     std::vector<int> tree;
//     Wisdom_tree() {
//         int value;
//         while (cin >> value && !cin.eof()) {
//             if (value == -1) {
//                 value = 0;
//             }
//             tree.push_back(value);
//         }
//     }

//     int high() {
//         return floor(log2(tree.size())) + 1;
//     }

//     int abundant_path() {
//         int max = 0;
//         tree.insert(tree.begin(), 0);
//         size_t size = tree.size();
//         for (size_t i = size - 1; i > 0; i--) {
//             int sum = 0;
//             for (int j = i;j>0 ; j /= 2) {
//                 sum += tree[j];
//             }
//             if (sum > max) {
//                 max = sum;
//             }
//         }
//         tree.erase(tree.begin());
//         return max;
//     }

//     int special_region() {
//         int sum = 0;
//         tree.insert(tree.begin(), 0); // 增加一个虚拟节点
//         size_t size = tree.size() - 1;
//         for (size_t i = 1; i <= size; i++) {
//             size_t left = static_cast<size_t>(2 * i);
//             size_t right = static_cast<size_t>(2 * i + 1);
//             if (left > size || tree[left] >= tree[i]) {
//                 continue;
//             }
//             else if (right > size) {
//                 sum += tree[i];
//             }
//             else if (tree[right]==0&&tree[left]==0) {
//                 continue;
//             }
//             else if(tree[right] < tree[i]){
//                 sum += tree[i];
//             }
            
//         }
//         return sum;
//     }
// };

// int main() {
//     Wisdom_tree tree;
//     cout << tree.high() << endl;
//     cout << tree.abundant_path() << endl;
//     cout << tree.special_region() << endl;
//     return 0;
// }