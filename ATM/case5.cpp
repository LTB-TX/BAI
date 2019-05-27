//客户取款函数
//本函数用于服务客户成员
//编制人：刘天宇
//调用者： service
//调用函数：one5
   #include "ltb.h"

    USER*case5(USER*p)/**取款业务**/
    {
        int W_money;/**定义取款数目**/
        int l;/**取款数目**/
        while(1)
        {
            fflush(stdin);/**清空缓冲区域**/
            system("cls");/**清屏**/
            cout << "\n\n\n\t\t\t<1>100            \t<4>1000\n"
                 << "\t\t\t<2>200            \t<5>5000\n"/**输出取款数目**/
                 << "\t\t\t<3>500            \t<0>取消\n"
                 << "\t\t\t  <请输入取款数目或者选择>\n";
            cin  >> W_money;/**输入取款项目或者取款数目**/
            if(W_money == 0)
                return p;
            else if(W_money % 100 != 0)/**判断是否能被整除**/
            {
                 switch(W_money)/**当选择取款选项时**/
                {
                case 1:/**选择1**/
                    l=100;/**给l复制**/
                    p = one5(l,p);/**返回值赋值给P**/
                    break;
                case 2:/**选择2**/
                    l=200;/**给l复制**/
                    p = one5(l,p);/**返回值赋值给P**/
                    break;
                case 3:/**选择3**/
                    l=500;/**给l复制**/
                    p = one5(l,p);/**返回值赋值给P**/
                    break;
                case 4:/**选择4**/
                    l=1000;/**给l复制**/
                    p = one5(l,p);/**返回值赋值给P**/
                    break;
                case 5:/**选择5**/
                    l=5000;/**给l复制**/
                    p = one5(l,p);/**返回值赋值给P**/
                    break;
                case 0:/**选择0**/
                    return p;/**返回用户服务界面**/
                    break;
                }
            }
            else
                p = one5(W_money,p);/**跳入取款确认界面**/
        }
    }
