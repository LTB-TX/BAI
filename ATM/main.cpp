#include "ltb.h"

int main()
{
    USER *head = new User;/**定义一个头部节点并开辟空间**/
    head->next = NULL;/**头部指向空**/
    hello(head);/**调用欢迎界面并将头指针传入**/
    return 0;
}
