//����Ա������
//�����������û���Ϣ�޸Ľ���
//�����ˣ�����
//�����ߣ� hello
//���ú�����Modify
#include "ltb.h"

    void Modify(int A,USER*head)/**�û���Ϣ�޸Ľ���**/
    {
        int d;/**���庯������**/
        int f=0;/**��ʼ��**/
        string mima;/**��������**/
        string a = "000000";
        USER*p=head->next;/**ָ����һ���ڵ�**/
        cout << "////////////////";
        while(p!=NULL)/**�û���Ϊ��**/
        {
            if(A == p->output_Ac())/**�ж���Ϣ���û���Ϣ�Ƿ�һ��**/
            {
                cout << "////////////////";
                f=1;
                break;
            }
            p = p->next;/**ָ����һ���ڵ�**/
        }
        if(f==0)
        {
            cout << "////////////////";
            Management(head);/**����**/
        }
        while(1)
        {
            fflush(stdin);/**��ջ�������**/
            system("cls");/**����**/
            cout << "\n\n\n\n\t\t\t  ~�û���Ϣ~\n"
                 << "\t\t\t   �˺�:" << p->output_Ac() << ">>>>\n"/**����˺�**/
                 << "\t\t\t(1)�� �� ��:" << p->output_N() << " \n "/**����û���**/
                 << "\t\t\t   �� ��:" << p->output_B() << "\n";/**������**/
            if(p->output_S() == 1)
                cout << "\t\t\t(2)�û�״̬: ����\n";/**������**/
            else
                cout << "\t\t\t(2)�û�״̬: ������\n";/**������**/
                cout << "\t\t\t(3)�˳�\n"
                     << "\n\n\t\t\t��������Ҫ�޸ĵ�ѡ�\n\n";
            cin >>d;/**����ѡ��**/
                    switch(d)
                    {
                    case 1:
                        d = 0;
                        cout << "��������ĺ���û���\n";
                        p->input_N();
                        cout << "�޸ĳɹ�\n";
                        Sleep(800);/**��ʱ800ms**/
                        continue;
                        break;
                    case 2:
                        d = 0;
                        cout << "�ⶳ��";/**�ⶳ��**/
                        for(d=0; d<5; d++)
                        {
                            Sleep(200);/**��ʱ200ms**/
                            cout <<"*";
                        }
                        p->input_S(1);
                        p->input_P(a);/**������ֵΪ000000**/
                        cout << "�ⶳ�ɹ�\n��������Ϊ 000000";/**�ⶳ�ɹ� ��������Ϊ000000**/
                        Sleep(800);/**��ʱ800ms**/
                        break;
                    case 3:
                        Management(head);
                    };
            }
        }
