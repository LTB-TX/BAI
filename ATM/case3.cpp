    #include "ltb.h"


    void case3(USER *head,USER *p)/**更改密码服务密码判断**/
    {
        string mima;/**输入的密码**/
        system("cls");/**清屏**/
        cout << "\n\n\t\t\t请输入原始密码：";/**输出请输入原始密码**/
        mima = P_input();/**输入密码**/
        if(mima == p->output_P())/**判断密码是否正确**/
            one3(head,p);/**进入更改程序**/
        else
        {
            cout << "\n\n\t\t\t原密码输入错误，请重新输入。\n\a";
            Sleep(800);/**延时800ms**/
            case3(head,p);/**返回此程序**/
        }
}
