#include "ltb.h"

int main()
{
    USER *head = new User;/**����һ��ͷ���ڵ㲢���ٿռ�**/
    head->next = NULL;/**ͷ��ָ���**/
    hello(head);/**���û�ӭ���沢��ͷָ�봫��**/
    return 0;
}
