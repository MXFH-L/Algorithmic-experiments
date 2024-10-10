// #include "MyStack.h"

// // 判断栈空, 若为空栈,则Empty()返回true；否则返回false
// bool MyStack::Empty() {
//     return top == -1;
// }

// // 判断栈满，若栈满，则Full()为true；否则为false
// bool MyStack::Full() {
//     return top == MAXLENG - 1;
// }

// // 元素e进栈，若栈满，则无法成功插入，插入成功返回true，否则返回false
// // @param
// // e: 将要入栈的元素
// bool MyStack::Push(ElementType e) {
//     if (Full()) {
//         return false;
//     }
//     elem[++top] = e;
//     return true;
// }

// // 栈的顶元素拷贝到e，若栈为空，则无法拷贝，返回false，成功拷贝则返回true
// // @param
// // e: 指向存放栈顶元素地址的指针
// bool MyStack::Gettop(ElementType &e) {
//     if (Empty()) {
//         return false;
//     }
//     e = elem[top];
//     return true;
// }

// // 删除栈s的顶元素，并将删除的元素赋给e带出，若栈空，则无法成功删除，删除成功返回true，否则返回false
// // @param
// // e: 指向存放出栈元素地址的指针
// bool MyStack::Pop(ElementType &e) {
//     if (Empty()) {
//         return false;
//     }
//     e = elem[top--];
//     return true;
// }