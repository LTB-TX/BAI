//取款服务函数
//本函数用于客户取款业务
//编制人：刘天宇
//调用者：one5
//调用函数：无
    #include "ltb.h"

    USER* one5(int y,USER*p)/**取款确认界面**/
    {
        if(y > p->output_B())/**判断余额是否充足**/
        {
            cout << "余额不足！\n\a";/**输出余额不足**/
            Sleep(800);/**延时800ms**/
            return p;/**返回转账函数**/
        }
        else
        {
            if(y > 5000)/**取款额度大于5000**/
            {
                cout << "\t最大单次取款额度5000元\n\a\t请重新输入或选择取款数目\n";/**输出最大单次取款额度5000元\n\a\t请重新输入或选择取款数目**/
                Sleep(800);/**延时800ms**/
                return p;/**返回转账函数**/
            }
            while(1)
            {
                cout << "\t您要取款的数目为" << y <<"元\n";/**输出取款数目**/
                cout << "\t<1>确认       <2>取消\n";/**确认或取消取款服务**/
                cin >> p->choose;
                switch(p->choose)
                {
                case 1:/**选择1**/
                    p->choose = 0;
                    system("cls");/**清屏**/
                    p->input_Be(y);/**此用户余额减少**/
                    p->input_Bi(y,1);/**出账**/
                    cout << "\n\n\t\t\t请收好您的钱款\n\a";/**输出请收好您的钱款**/
                    Sleep(800);/**延时800ms**/
                    return p;/**返回转账函数**/
                    break;
                case 2:/**选择2**/
                    p->choose = 0;
                    return p;/**返回转账函数**/
                    break;
                }
            }
        }
    }
