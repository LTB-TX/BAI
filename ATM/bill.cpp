    #include "ltb.h"

    void bill(USER *head)
    {
        USER*p = head->next;/**p保存第一位节点**/
        cout << "********************************";
        int b;
        while(p!=NULL)
        {
            cout<<"账户名"<< p->output_Ac() << endl;
            for(b = 0;b < p->b;b++)/**b小于账单保存量时循环***/
            {
                cout << "出账：";
                p->output_Bi(1,b);/**输出出账的钱数**/
            }
            cout << endl;
            for(b = 0;b < p->b;b++)/**b小于账单保存量时循环***/
            {
                cout << "入账：";
                p->output_Bi(0,b);/**输出入账的钱数**/
            }
            cout << endl;
            p=p->next;/**p置为下一位**/
        }
        cout << "任意键返回";
        cin >> b;
        Management(head);
    }
