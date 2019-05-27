    #include "ltb.h"
       //用户查询
//本函数用于用户查询
//编制人：林建祺
//调用者： case2
//调用函数：无

    USER* case2(USER *head,USER *p)/**用户查询**/
    {
        while(1)
        {
            fflush(stdin);/**清空缓冲区域**/
            system("cls");/**清屏**/
            cout << "\n\n\n\n\t\t\t  ~用户信息~\n"
                 << "\t\t\t账号:" << p->output_Ac() << ">>>>\n"/**输出账号**/
                 << "\t\t\t用 户 名:" << p->output_N() << " \n "/**输出用户名**/
                 << "\t\t\t余 额:" << p->output_B() << "\n";/**输出余额**/
            if(p->output_S() == 1)
                cout << "\t\t\t用户状态: 正常\n";/**输出余额**/
            else
                cout << "\t\t\t用户状态: 已锁定\n";/**输出余额**/
            cout << "\t\t1、返回用户服务界面\n\n\t\t2、退出\n";/**输出两项选择**/
            cin >> head->choose;/**输入执行的编号**/
            switch(head->choose)/**switch选择语句**/
            {
            case 1:/**选择1**/
                return p;/**返用户服务界面**/
                break;
            case 2:/**选择2**/
                hello(head);/**返回欢迎界面**/
                break;
            };
        }
        return p;/**返回**/
    }
