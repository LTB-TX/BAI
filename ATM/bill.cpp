    #include "ltb.h"

    void bill(USER *head)
    {
        USER*p = head->next;/**p�����һλ�ڵ�**/
        cout << "********************************";
        int b;
        while(p!=NULL)
        {
            cout<<"�˻���"<< p->output_Ac() << endl;
            for(b = 0;b < p->b;b++)/**bС���˵�������ʱѭ��***/
            {
                cout << "���ˣ�";
                p->output_Bi(1,b);/**������˵�Ǯ��**/
            }
            cout << endl;
            for(b = 0;b < p->b;b++)/**bС���˵�������ʱѭ��***/
            {
                cout << "���ˣ�";
                p->output_Bi(0,b);/**������˵�Ǯ��**/
            }
            cout << endl;
            p=p->next;/**p��Ϊ��һλ**/
        }
        cout << "���������";
        cin >> b;
        Management(head);
    }
