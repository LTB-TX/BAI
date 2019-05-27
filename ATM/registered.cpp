    #include "ltb.h"
//用户初始注册
//本函数用于用户初始注册
//编制人：林建祺
//调用者： registered
//调用函数：Insert

    USER*registered(USER *head)/**账户注册**/
    {
        USER *p1,*p2;/**声明指针**/
        if(head->n > 0)/**注册数量大于0**/
            Insert(head);/**进入函数**/
        system("cls");/**清空**/
        string mima;
        while(1)
        {
            fflush(stdin);/**清空缓冲区域**/
            system("cls");
            cout << endl << endl << endl
                 << "\t\t\t\t***************************************" << endl
                 << "\t\t\t\t*     欢迎使用银行自助服务系统        *" << endl
                 << "\t\t\t\t*      请按照提示填写个人信息         *" << endl
                 << "\t\t\t\t***************************************" << endl;
            p1 = new USER;
            cout << "\n\t\t\t请输入真实姓名：";/**输出请输入真实姓名：**/
            p1->input_N();/**向Account_number赋值**/
            mima = P_input();
            head->n ++;/**用户数量编号加一**/
            int c = 2018000 + head->n;
            p1->input_Ac(c);
            p1->input_P(mima);/**将后面的函数值赋予前面的函数**/
            p1->input_S(1);/**对用户进行状态设定**/
            p1->input_Ba(0);///初始化余额
            system("cls");/**清屏**/
            cout <<"\n\t\t\t\t账户注册成功!\n\a\n";/**输出账户注册成功!请重新登录**/
            cout <<"\t\t\t\t账号：    "<< p1->output_Ac() << "    >>>>\n\n"
                 <<"\t\t\t\t用户名：    "<< p1->output_N()
                 <<"\n\n\t\t\t\t用户类型：    普通用户\n\n"
                 <<"\t\t\t\t余额：    " << p1->output_B()<< endl
                 <<"\t\t\t\t是 否 继 续 录 入 ？\n"
                 <<"1、是    2、否"<<endl;
            cin >>p1->choose;
            if(head->n == 1)
                head->next = p1;/**如果头部尾指向空则使头部尾指向p3头**/
            else
                p2->next = p1;/**否则使p2的尾指向p1的头**/
            if(p1->choose == 2)
            {
                p1->next = NULL;
                return head;
            }
            p2 = p1;/**令p2等于p1**/
        }
        return head;
    }
