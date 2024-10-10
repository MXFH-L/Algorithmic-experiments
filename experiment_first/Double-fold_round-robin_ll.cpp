// #include "Linklist.h"

// void changeList(Linklist &list) {
//     if(list==list->next->next)
//     {
//         return;
//     }
//     node *ture_head = list->next;
//     node *ture_tail = list->prior;
//     list->next = nullptr;
//     list->prior = nullptr;
//     ture_head->prior = nullptr;
//     ture_tail->next = nullptr;

//     // 分离奇数项和偶数项
//     node *oddHead = ture_head, *evenHead = ture_head->next;
//     node *lastEven = ture_head->next;
//     node *odd = oddHead, *even = evenHead;

//     while (even != nullptr && even->next != nullptr) {
        
//         odd->next = even->next;
//         odd->next->prior = odd;
//         odd = odd->next;
//         if(odd->next!=nullptr){
//         even->next = odd->next;
//         even->next->prior = even;
//         even = even->next;
//         }
//         else{
//             even->next=nullptr;
//             break;
//         }
        
//     }
//     odd->next=nullptr;

//     // 逆序偶数项链表
//     node *prev = nullptr;
//     node *current = evenHead;
//     node *next = nullptr;
//     while (current != nullptr) {
//         next = current->next;
//         current->next = prev;
//         current->prior = next;
//         prev = current;
//         current = next;
//     }
//     evenHead = prev;
//     evenHead->prior=current;

//     // 合并奇数项链表和逆序后的偶数项链表
//     odd->next = evenHead;
//     evenHead->prior = odd;

    
//     lastEven->next = list;
//     list->prior = lastEven;
//     oddHead->prior=list;
//     list->next=oddHead;
// }