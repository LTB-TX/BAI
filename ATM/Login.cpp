    #include "ltb.h"
//用户登录初始界面
//本函数用于用户登录初始界面
//编制人：林建祺
//调用者： Login
//调用函数：judge

    USER*Login(USER *head)///登录账号验证函数
    {
        USER *p = head->next;///定义一个节点并让节点为第一位
        int number;/**输入的账号**/
        cout << "\t\t\t请输入账号：";/**输出请输入账号**/
        cin >> number;/**向number赋值**/
        while(p != NULL)///p不为空循环
        {
            if(number == p->output_Ac())///如果输入的账号与已有账号重合
            {
                if(p->output_S() == 1)/**判断用户状态是否为冻结**/
                {
                    judge(head,p);/**跳转到密码判断**/
                }
                else
                {
                    system("cls");/**清屏**/
                    cout << "\n\n\t\t\t您的账户已锁定！\n\a\t\t\t请联系工作人员进行解锁！\n";/**您的账户已锁定！请联系工作人员进行解锁！**/
                    Sleep(1000);/**延时1000ms**/
                    hello(head);/**返回欢迎界面**/
                }
            }
            p=p->next;///p向下一位移动
        }
        cout << "\t\t\t用户未注册或用户名输入错误!\a\n";
        Sleep(800);/**延时800ms**/
        return head;///传值反回
    }
