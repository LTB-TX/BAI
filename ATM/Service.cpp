 //�û��������
 //���������ڷ���ͻ���Ա
 //�����ˣ�������
 //�����ߣ�hello
 //���ú���:Service

    #include "ltb.h"

    void Service(USER *head,USER *p)/**�û��������**/
    {
        if(p->output_P() == "000000")/**�����λΪ�������**/
        {
            cout << "����������ڼ򵥻�Ϊ�ⶳ���������룡������޸�\n";
            one3(head,p);/**��ת���޸ĳ���**/
        }
        while(1)
        {
            fflush(stdin);/**��ջ�������**/
            system("cls");/**����**/
            cout << "\n\n\n\t\t\t    ��ѡ����Ҫִ�е�ҵ��\n"
                 << "\t\t\t1:<ת��>          \t2:<��ѯ>\n\n"
                 << "\t\t\t3:<�޸�����>      \t4:<���>\n\n"/**���6������ѡ��û�ѡ��**/
                 << "\t\t\t5:<ȡ��>          \t6:<�˳�>\n\n"
                 << "\t\t\t      ������1-6����ѡ��\n";
            cin >> head->choose;/**�������**/
            switch(head->choose)/**switchѡ�����**/
            {
            case 1:/**����1**/
                head->choose = 0;
                case1(head,p);/**����ת�˽���**/
                break;
            case 2:/**����2**/
                head->choose = 0;
                p = case2(head,p);/**�����ѯҳ��**/
                break;
            case 3:/**����3**/
                head->choose = 0;
                case3(head,p);/**�����޸��������**/
                break;
            case 4:/**����4**/
                head->choose = 0;
                p = case4(p);/**���������**/
                break;
            case 5:/**����5**/
                head->choose = 0;
                p = case5(p);/**����ȡ�����**/
                break;
            case 6:/**����0**/
                head->choose = 0;
                hello(head);/**����������**/
                break;
            };
        }
    }
