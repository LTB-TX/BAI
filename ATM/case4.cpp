//��������
//���������ڷ���ͻ���Ա
//�����ˣ�������
//�����ߣ�service
//���ú�������
    #include "ltb.h"

    USER*case4(USER*p)/**������**/
    {
        int zhangshu = 0;/**��������**/
        int cunkuan = 0;/**���**/
        system("cls");/**����**/
        while(1)
        {
            cout << "\n\n\t\t\t�뽫��Ʊ�������泮��\n";/**����뽫��Ʊ�������泮��**/
            cout << "\t\t\tATM��ֻ��ʶ��100Ԫ��Ʊ\n\n";/**���ATM��ֻ��ʶ��100Ԫ��Ʊ**/
            cout << "\t\t\t   �����������\n\a";/**��������������**/
            cin >> zhangshu;/**�����������**/
            if(zhangshu > 100)/**�����Ʊ��������100**/
            {
                cout << "\n\n\t\t���������100�ų�Ʊ\n";
            }
            system("cls");/**����**/
            cout << "\t\t\t100Ԫ����:" << zhangshu << endl;/**���100Ԫ����**/
            cunkuan = 100 * zhangshu;/**������**/
            cout << "\t\t\t�����:CNY" << cunkuan << endl;/**���������**/
            p->input_Ba(cunkuan);/**���˻����������**/
            p->input_Bi(cunkuan,0);/**��������**/
            Sleep(2000);/**��ʱ800ms**/
            return p;/**�����û��������**/
        }
    }
