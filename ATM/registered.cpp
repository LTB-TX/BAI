    #include "ltb.h"
//�û���ʼע��
//�����������û���ʼע��
//�����ˣ��ֽ���
//�����ߣ� registered
//���ú�����Insert

    USER*registered(USER *head)/**�˻�ע��**/
    {
        USER *p1,*p2;/**����ָ��**/
        if(head->n > 0)/**ע����������0**/
            Insert(head);/**���뺯��**/
        system("cls");/**���**/
        string mima;
        while(1)
        {
            fflush(stdin);/**��ջ�������**/
            system("cls");
            cout << endl << endl << endl
                 << "\t\t\t\t***************************************" << endl
                 << "\t\t\t\t*     ��ӭʹ��������������ϵͳ        *" << endl
                 << "\t\t\t\t*      �밴����ʾ��д������Ϣ         *" << endl
                 << "\t\t\t\t***************************************" << endl;
            p1 = new USER;
            cout << "\n\t\t\t��������ʵ������";/**�����������ʵ������**/
            p1->input_N();/**��Account_number��ֵ**/
            mima = P_input();
            head->n ++;/**�û�������ż�һ**/
            int c = 2018000 + head->n;
            p1->input_Ac(c);
            p1->input_P(mima);/**������ĺ���ֵ����ǰ��ĺ���**/
            p1->input_S(1);/**���û�����״̬�趨**/
            p1->input_Ba(0);///��ʼ�����
            system("cls");/**����**/
            cout <<"\n\t\t\t\t�˻�ע��ɹ�!\n\a\n";/**����˻�ע��ɹ�!�����µ�¼**/
            cout <<"\t\t\t\t�˺ţ�    "<< p1->output_Ac() << "    >>>>\n\n"
                 <<"\t\t\t\t�û�����    "<< p1->output_N()
                 <<"\n\n\t\t\t\t�û����ͣ�    ��ͨ�û�\n\n"
                 <<"\t\t\t\t��    " << p1->output_B()<< endl
                 <<"\t\t\t\t�� �� �� �� ¼ �� ��\n"
                 <<"1����    2����"<<endl;
            cin >>p1->choose;
            if(head->n == 1)
                head->next = p1;/**���ͷ��βָ�����ʹͷ��βָ��p3ͷ**/
            else
                p2->next = p1;/**����ʹp2��βָ��p1��ͷ**/
            if(p1->choose == 2)
            {
                p1->next = NULL;
                return head;
            }
            p2 = p1;/**��p2����p1**/
        }
        return head;
    }
