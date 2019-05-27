//转账业务
//本函数用于管理客户成员
//编制人：王娜
//调用者： USER
//调用函数：Modify
#include "ltb.h"

    void case1(USER *head,USER *p)/**转账业务**/
    {

        USER*p1 = head->next;/**头节点指向下一个节点**/
        int number = 0;/**声明账号类型为整型**/
        int T_money = 0;/**转账金额**/
        int a = 0;/**初始化a标志**/
        system("cls");/**清屏**/
        cout << "\n\n\t\t\t请输入转账账号:"
             << "<\n\n\t\t<0>退出\n";
        cin >> number;/**输入账号**/
        if(number==0)/**如果账号不存在**/
            Service(head,p);/**返回头节点**/
        else
        {
            while(p1 != NULL)/**用户名为空**/
            {
                if(p1->output_Ac() == number)/**判断是否为自己的账户**/
                {
                    a = 1;/**标志a为1**/
                    break;/**结束循环**/
                }
                p1=p1->next;/**指向下一个节点**/
            }
            if(a == 1)
            {
                if(number == p->output_Ac())/**判断账户与用户账户是否一样**/
                {
                    cout << "\t\t\t无法向自己的用户转账！\n\a";
                    Sleep(800);/**延时800ms**/
                    Service(head,p);/**返回重新输入转账金额**/
                }
                else/**如果不是**/
                {
                    system("cls");/**清屏**/
                    cout << "\n\n\t\t\t请输入转账金额:\n";
                    cin >> T_money;/**输入转账金额**/
                    int b = p->output_B();
                    if(T_money < 0)
                    {
                        cout << "输入错误请重新输入";
                        Sleep(800);///延时800ms
                        Service(head,p);/**返回重新输入转账金额**/
                    }
                    if(T_money >= b)/**判断余额是否充足转账余额**/
                    {
                        cout << "**********";
                        system("cls");/**清屏**/
                        cout << "\n\n\t\t\t卡内余额不足\n\a";/**输出卡内余额不足，并发出警告**/
                        Sleep(800);/**延时800ms**/
                        Service(head,p);/**返回重新输入转账金额**/
                    }
                    else
                    {
                        system("cls");/**清屏**/
                        cout << "\n\n\t\t\t向" << p1->output_Ac() << "转账成功\n";/**输出向x用户转账成功**/
                        Sleep(800);/**延时800ms**/
                        p->input_Be(T_money);/**本用户余额减少**/
                        p1->input_Ba(T_money);/**接收用户余额增多**/
                        SYSTEMTIME time;/**定义一个系统时间结构体变量**/
                        GetLocalTime( &time );/**获取系统时间**/
                        if(time.wHour >= 16)/**系统时间小时位大于106时**/
                        {
                            p->input_Bi(T_money,1);/**出账储存**/
                            p1->input_Bi(T_money,0);/**入账储存**/
                        }
                        Service(head,p);/**返回用户服务界面**/
                    }
                }
            }
            else
            {
                cout << "您输入的账号有误！\n\n\a";
                Sleep(800);/**延时800ms**/
                Service(head,p);/**返回重新输入转账金额**/
            }
        }
    }
