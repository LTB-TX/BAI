    #include "ltb.h"

    basis::basis()///���캯��
    {
        Account_number = 0;///��ʼ��
        Balance = 0;///��ʼ��
        Bill[0][0] = 0;///��ʼ��
    }
    basis::~basis()///��������
    {
        cout << "*";
    }
    User::User()/**���캯��**/
    {
        n = 0;///��ʼ��
        choose = 0;///��ʼ��
    }
    User::~User()/**��������**/
    {
        cout << "*";
    }
    void User::input_Ac(int A)/**�����˻���**/
    {
        Account_number = A;
    }
    void User::input_N()/**�����˻���**/
    {
        cin >> name;
    }
    void User::input_Ba(int A)/**�˻��������**/
    {
        Balance +=A;
    }
    void User::input_Be(int B)/**�˻�������**/
    {
        Balance -=B;
    }
    void User::input_P(string A)/**��������**/
    {
        Password = A;
    }
    void User::input_S(int a)/**�����û�״̬**/
    {
        if(a == 1)
            state = "����";
        else
            state = "������";
    }
    void User::input_Bi(int a,int c)///�����˵�
    {
        if(c==1)/**�������**/
            Bill[1][b] = a;
        else/**��������**/
            Bill[0][b] = a;
        b++;
    }
    void User::output_Bi(int i,int j)///����˵�
    {
        if(i == 1)
            cout << Bill[1][j] << "  ";
        else
            cout << Bill[0][j] << "  ";
    }
    int User::output_Ac()/**����˺�**/
    {
        return Account_number;
    }
    string User::output_N()/**����˻���**/
    {
        return name;
    }
    int User::output_B()/**����˻����**/
    {
        return Balance;
    }
    string User::output_P()/**���ԭʼ����**/
    {
        return Password;
    }
    int User::output_S()/**����û�״̬**/
    {
        if(state == "����")
            return 1;
        else
            return 0;
    }
