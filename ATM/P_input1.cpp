    #include "ltb.h"

    string P_input()/**密码输入控制**/
    {
        string mima;/**定义一个sting类**/
        char mi[10],m;/**定义一个字符串，一个字符**/
        int i = 0;/**定义一个整形变量**/
        while(1)/**无限循环**/
        {
            cout << "\n\t\t\t请输入密码：";
            while ((m = getch()) != '\r')/**如果输入的字符不是回车**/
            {
                if(m == '\b' && i > 0)/**如果输入为退格，且i大于0**/
                {
                    cout << "\b";/**输出一个退格**/
                    i--;/**i减一**/
                }
                else if(m != '\b')/**如果输入的不为退格**/
                {
                    mi[i++] = m;/**用数组保存此位**/
                    cout << "*";/**输入***/
                    if(i == 6)/**当i为6时结束输入**/
                        break;
                }
            }
            if(i < 6)/**如果输入小于6位**/
            {
                cout << "\n\t\t\t1111111111";
                i = 0;/**重置i**/
                continue;/**结束循环进入下一循环**/
            }
            else
            {
                break;/**结束循环**/
            }
        }
        mi[i] = '\0';
        mima = mi;
        return mima;
    }
