 //用户服务界面
 //本函数用于服务客户成员
 //编制人：刘天宇
 //调用者：hello
 //调用函数:Service

    #include "ltb.h"

    void Service(USER *head,USER *p)/**用户服务界面**/
    {
        if(p->output_P() == "000000")/**输出六位为零的密码**/
        {
            cout << "您的密码过于简单或为解冻后重置密码！请进行修改\n";
            one3(head,p);/**跳转至修改程序**/
        }
        while(1)
        {
            fflush(stdin);/**清空缓冲区域**/
            system("cls");/**清屏**/
            cout << "\n\n\n\t\t\t    请选择您要执行的业务：\n"
                 << "\t\t\t1:<转账>          \t2:<查询>\n\n"
                 << "\t\t\t3:<修改密码>      \t4:<存款>\n\n"/**输出6个任务选项供用户选择**/
                 << "\t\t\t5:<取款>          \t6:<退出>\n\n"
                 << "\t\t\t      请输入1-6进行选择：\n";
            cin >> head->choose;/**输入序号**/
            switch(head->choose)/**switch选择语句**/
            {
            case 1:/**输入1**/
                head->choose = 0;
                case1(head,p);/**进入转账界面**/
                break;
            case 2:/**输入2**/
                head->choose = 0;
                p = case2(head,p);/**进入查询页面**/
                break;
            case 3:/**输入3**/
                head->choose = 0;
                case3(head,p);/**进入修改密码界面**/
                break;
            case 4:/**输入4**/
                head->choose = 0;
                p = case4(p);/**进入存款界面**/
                break;
            case 5:/**输入5**/
                head->choose = 0;
                p = case5(p);/**进入取款界面**/
                break;
            case 6:/**输入0**/
                head->choose = 0;
                hello(head);/**返回主界面**/
                break;
            };
        }
    }
