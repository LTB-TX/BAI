    #include "ltb.h"

     void one3(USER*head,USER*p)/**修改密码服务更改程序**/
     {
        string mima1;/**第一次输入的修改密码**/
        string mima2;/**第二次输入的修改密码**/
        system("cls");/**清屏**/
        cout<<"\n\n\t\t\t请输入更改后密码：";/**输出请输入更改后密码：**/
        mima1 = P_input();/**第一遍输入密码**/
        cout << "\n\t\t\t请再次输入更改后密码：";/**输出请再次输入更改后密码：**/
        mima2 = P_input();/**第二遍输入密码**/
            if(mima1 == mima2)/**判断两次输入密码是否一样**/
            {
                if(mima1 == p->output_P())/**判断与原密码是否一样**/
                {
                    cout << "\t\t更改的密码不能与原密码相同!!!\a\n";/**输出更改的密码不能与原密码相同**/
                    Sleep(800);/**延时800ms**/
                    one3(head,p);/**返回此函数**/
                }
                else
                {
                    p->input_P(mima1);/**将新密码赋值**/
                    cout << "\n\n\t\t\t修改密码成功\n请牢记新密码\n\a";/**输出修改密码成功请牢记新密码**/
                    Sleep(800);/**延时800ms**/
                    hello(head);/**返回欢迎界面**/
                   }
            }
            else
            {
                system("cls");/**清屏**/
                cout << "\n\n\t\t\t两次密码输入不相同\n\t\t请重新输入\n";/**输出两次密码输入不相同\请重新输入**/
                Sleep(800);/**延时800ms**/
                one3(head,p);/**返回此程序**/
            }
     }


