//存款服务函数
//本函数用于服务客户成员
//编制人：刘天宇
//调用者：service
//调用函数：无
    #include "ltb.h"

    USER*case4(USER*p)/**存款服务**/
    {
        int zhangshu = 0;/**存入张数**/
        int cunkuan = 0;/**存款**/
        system("cls");/**清屏**/
        while(1)
        {
            cout << "\n\n\t\t\t请将钞票整齐放入存钞口\n";/**输出请将钞票整齐放入存钞口**/
            cout << "\t\t\tATM机只能识别100元钞票\n\n";/**输出ATM机只能识别100元钞票**/
            cout << "\t\t\t   请勿放入杂物\n\a";/**输出请勿将杂物放入**/
            cin >> zhangshu;/**输入存入张数**/
            if(zhangshu > 100)/**如果钞票张数大于100**/
            {
                cout << "\n\n\t\t请放入少于100张钞票\n";
            }
            system("cls");/**清屏**/
            cout << "\t\t\t100元张数:" << zhangshu << endl;/**输出100元张数**/
            cunkuan = 100 * zhangshu;/**计算金额**/
            cout << "\t\t\t存款金额:CNY" << cunkuan << endl;/**输出存入金额**/
            p->input_Ba(cunkuan);/**此账户的余额增加**/
            p->input_Bi(cunkuan,0);/**储存入账**/
            Sleep(2000);/**延时800ms**/
            return p;/**返回用户服务界面**/
        }
    }
