    #include "ltb.h"


    void case3(USER *head,USER *p)/**����������������ж�**/
    {
        string mima;/**���������**/
        system("cls");/**����**/
        cout << "\n\n\t\t\t������ԭʼ���룺";/**���������ԭʼ����**/
        mima = P_input();/**��������**/
        if(mima == p->output_P())/**�ж������Ƿ���ȷ**/
            one3(head,p);/**������ĳ���**/
        else
        {
            cout << "\n\n\t\t\tԭ��������������������롣\n\a";
            Sleep(800);/**��ʱ800ms**/
            case3(head,p);/**���ش˳���**/
        }
}
