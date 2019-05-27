#ifndef LTB_H_
#define LTB_H_

    #include <iostream>
    #include <string>
    #include <windows.h>//延时清屏
    #include <stdlib.h>//清屏
    #include <conio.h>//getch（）
    #include <ctime>
    #include <stdio.h>//清空缓冲区域
    using namespace std;

    class basis/**基类**/
    {
        public:/**私有成员**/
            int Account_number;/**账号**/
            string name;/**账户名**/
            int Balance;/**账户余额**/
            string Password;/**原始密码**/
            string state;/**用户状态**/
            int Bill[2][50];/**账单**/
            basis();///构造函数
            virtual~basis();///虚析构函数
    };

    typedef class User:private basis
    {
    public:/**公有成员**/
        int b;/**记录账单次数**/
        User*next;/**保存节点**/
        int n;/**注册数量**/
        int i;/**储存转账次数**/
        int choose;/**选项储存**/
        User();/**构造函数**/
        ~User();/**析构函数**/
        void input_Ac(int A);///输入账户
        void input_N();///输入账户名
        void input_Ba(int A);///输入余额增加
        void input_Be(int B);///输入余额减少
        void input_P(string A);///输入密码
        void input_S(int a);///输入用户状态
        void input_Bi(int a,int c);
        void output_Bi(int i,int j);
        int output_Ac();///输出账户
        string output_N();///输出账户名
        int output_B();///输出余额
        string output_P();///输出密码
        int output_S();///输出用户状态
    }USER;

    void hello(USER *);/**欢迎界面**/
    USER*registered(USER *head);/**用户初始注册**/
    void Insert(USER *head);/**用户插入注册**/
    USER*Login(USER *head);/**用户登录初始界面**/
    void judge(USER *huad,USER *p);/**密码判断子函数**/
    void Service(USER *head,USER *p);/**服务界面**/
    void case1(USER *head,USER *p);/**转账**/
    USER*case2(USER *head,USER *p);/**用户查询**/
    void case3(USER *head,USER *p);/**修改密码判断**/
    void one3(USER *head,USER *p);/**修改密码程序**/
    USER*case4(USER*p);/**存款程序**/
    USER*case5(USER*p);/**取款程序**/
    USER*one5(int y,USER*p);/**取款验证**/
    void Management(USER*head);///管理员服务界面
    void Modify(int A,USER*p);///用户信息更改界面
    string P_input();/**密码输入函数**/
    void bill(USER *head);///账单输出函数
#endif
