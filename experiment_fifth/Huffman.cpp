// #include "Solution.h"

// TreeNode* huffman(std::vector<TreeNode*>& tree) {
//     int n = tree.size();
//     // 创建一个小顶堆
//     std::priority_queue<TreeNode*, std::vector<TreeNode*>, TreeNode> q;
//     // 把 tree 放入 q 中
//     for (int i = 0; i < n; i++) {
//         q.push(tree[i]);
//     }

//     // 合并节点，直到堆中只剩下一个节点
//     while (q.size() > 1) {
//         // 取出频率最小的两个节点
//         TreeNode* leftNode = q.top(); q.pop();
//         TreeNode* rightNode = q.top(); q.pop();
//         TreeNode* parentNode = new TreeNode();

//         parentNode->freq = leftNode->freq + rightNode->freq;
//         parentNode->left = leftNode;
//         parentNode->right = rightNode;
//         q.push(parentNode);
//     }

//     return q.top();
// }