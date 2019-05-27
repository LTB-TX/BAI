    #include "ltb.h"

    basis::basis()///构造函数
    {
        Account_number = 0;///初始化
        Balance = 0;///初始化
        Bill[0][0] = 0;///初始化
    }
    basis::~basis()///析构函数
    {
        cout << "*";
    }
    User::User()/**构造函数**/
    {
        n = 0;///初始化
        choose = 0;///初始化
    }
    User::~User()/**析构函数**/
    {
        cout << "*";
    }
    void User::input_Ac(int A)/**输入账户名**/
    {
        Account_number = A;
    }
    void User::input_N()/**输入账户名**/
    {
        cin >> name;
    }
    void User::input_Ba(int A)/**账户余额增加**/
    {
        Balance +=A;
    }
    void User::input_Be(int B)/**账户余额减少**/
    {
        Balance -=B;
    }
    void User::input_P(string A)/**输入密码**/
    {
        Password = A;
    }
    void User::input_S(int a)/**输入用户状态**/
    {
        if(a == 1)
            state = "正常";
        else
            state = "已锁定";
    }
    void User::input_Bi(int a,int c)///输入账单
    {
        if(c==1)/**储存出账**/
            Bill[1][b] = a;
        else/**储存入账**/
            Bill[0][b] = a;
        b++;
    }
    void User::output_Bi(int i,int j)///输出账单
    {
        if(i == 1)
            cout << Bill[1][j] << "  ";
        else
            cout << Bill[0][j] << "  ";
    }
    int User::output_Ac()/**输出账号**/
    {
        return Account_number;
    }
    string User::output_N()/**输出账户名**/
    {
        return name;
    }
    int User::output_B()/**输出账户余额**/
    {
        return Balance;
    }
    string User::output_P()/**输出原始密码**/
    {
        return Password;
    }
    int User::output_S()/**输出用户状态**/
    {
        if(state == "正常")
            return 1;
        else
            return 0;
    }
