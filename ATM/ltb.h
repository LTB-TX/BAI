#ifndef LTB_H_
#define LTB_H_

    #include <iostream>
    #include <string>
    #include <windows.h>//��ʱ����
    #include <stdlib.h>//����
    #include <conio.h>//getch����
    #include <ctime>
    #include <stdio.h>//��ջ�������
    using namespace std;

    class basis/**����**/
    {
        public:/**˽�г�Ա**/
            int Account_number;/**�˺�**/
            string name;/**�˻���**/
            int Balance;/**�˻����**/
            string Password;/**ԭʼ����**/
            string state;/**�û�״̬**/
            int Bill[2][50];/**�˵�**/
            basis();///���캯��
            virtual~basis();///����������
    };

    typedef class User:private basis
    {
    public:/**���г�Ա**/
        int b;/**��¼�˵�����**/
        User*next;/**����ڵ�**/
        int n;/**ע������**/
        int i;/**����ת�˴���**/
        int choose;/**ѡ���**/
        User();/**���캯��**/
        ~User();/**��������**/
        void input_Ac(int A);///�����˻�
        void input_N();///�����˻���
        void input_Ba(int A);///�����������
        void input_Be(int B);///����������
        void input_P(string A);///��������
        void input_S(int a);///�����û�״̬
        void input_Bi(int a,int c);
        void output_Bi(int i,int j);
        int output_Ac();///����˻�
        string output_N();///����˻���
        int output_B();///������
        string output_P();///�������
        int output_S();///����û�״̬
    }USER;

    void hello(USER *);/**��ӭ����**/
    USER*registered(USER *head);/**�û���ʼע��**/
    void Insert(USER *head);/**�û�����ע��**/
    USER*Login(USER *head);/**�û���¼��ʼ����**/
    void judge(USER *huad,USER *p);/**�����ж��Ӻ���**/
    void Service(USER *head,USER *p);/**�������**/
    void case1(USER *head,USER *p);/**ת��**/
    USER*case2(USER *head,USER *p);/**�û���ѯ**/
    void case3(USER *head,USER *p);/**�޸������ж�**/
    void one3(USER *head,USER *p);/**�޸��������**/
    USER*case4(USER*p);/**������**/
    USER*case5(USER*p);/**ȡ�����**/
    USER*one5(int y,USER*p);/**ȡ����֤**/
    void Management(USER*head);///����Ա�������
    void Modify(int A,USER*p);///�û���Ϣ���Ľ���
    string P_input();/**�������뺯��**/
    void bill(USER *head);///�˵��������
#endif
