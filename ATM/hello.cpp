    #include "ltb.h"
    //��ӭ����
    //���������ڻ�ӭ�������
    //�����ˣ��ֽ���
    //�����ߣ� hello
    //���ú�����Modify
    void hello(USER *head)///��ӭ����
    {
        string a;
        while(1)
        {
            fflush(stdin);/**��ջ�������**/
            system("cls");/**����**/
            cout << "\n\n\t\t\t ������������������������������������������\n"
                 << "\t\t\t��                                        ��\n"
                 << "\t\t\t��        ��ӭʹ��������������ϵͳ        ��\n"
                 << "\t\t\t��                                        ��\n"
                 << "\t\t\t ������������������������������������������\n"
                 << "\n\n\t\t\t\t\t<1>�˻�ע��\n\n\t\t\t\t\t<2>�˻���¼\n\n\t\t\t\t\t<3>Ա������ϵͳ\n\n";
            cin >> head->choose;///����ֵ���浽head->choose
            cout << endl;
            switch(head->choose)///ʶ��head->choose
            {
            case 1:/**head->choose=1**/
                head->choose = 0;/**��ʼ��ѡ��**/
                head = registered(head);/**�����˻�ע��**/
                break;
            case 2:/**head->choose=2**/
                head->choose = 0;/**��ʼ��ѡ��**/
                head = Login(head);/**�����û���¼**/
                break;
            case 3:/**Ա������ϵͳ**/
                head->choose = 0;/**��ʼ��ѡ��**/
                cout <<"���������Ա����" << endl;
                a = P_input();/**��������**/
                if(a == "582127")/**����**/
                    Management(head);/**����**/
                else
                    continue;/**��������ѭ��**/
                break;
            };
        }
    }
