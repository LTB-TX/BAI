    #include "ltb.h"
       //�û���ѯ
//�����������û���ѯ
//�����ˣ��ֽ���
//�����ߣ� case2
//���ú�������

    USER* case2(USER *head,USER *p)/**�û���ѯ**/
    {
        while(1)
        {
            fflush(stdin);/**��ջ�������**/
            system("cls");/**����**/
            cout << "\n\n\n\n\t\t\t  ~�û���Ϣ~\n"
                 << "\t\t\t�˺�:" << p->output_Ac() << ">>>>\n"/**����˺�**/
                 << "\t\t\t�� �� ��:" << p->output_N() << " \n "/**����û���**/
                 << "\t\t\t�� ��:" << p->output_B() << "\n";/**������**/
            if(p->output_S() == 1)
                cout << "\t\t\t�û�״̬: ����\n";/**������**/
            else
                cout << "\t\t\t�û�״̬: ������\n";/**������**/
            cout << "\t\t1�������û��������\n\n\t\t2���˳�\n";/**�������ѡ��**/
            cin >> head->choose;/**����ִ�еı��**/
            switch(head->choose)/**switchѡ�����**/
            {
            case 1:/**ѡ��1**/
                return p;/**���û��������**/
                break;
            case 2:/**ѡ��2**/
                hello(head);/**���ػ�ӭ����**/
                break;
            };
        }
        return p;/**����**/
    }
