#include<bits/stdc++.h>
using namespace std;
// string allChNum[] = {"��","Ҽ","��","��","��","��","½","��","��","��","ʰ","��","Ǫ","��","��"} ;
// string bignumber[]={"��","Ҽ","��","��","��","��","½","��","��","��"} ;
// string digital_units[] ={"ʰ","��","Ǫ","��","��"};
// const int bigl = 15;


// class Number {
// private:
// 	string input;	//����
// 	string output;	//ת����Ĵ�д����
// 	string letter[10];	//1-10��д const
//     // string allChNum[15];
//     string chNumunit[5];
// 	int length;
// 	bool flag;
// 	int temp;//����
// public:
// 	void Init_Number();	//���� letter��ʼ�� ��������input��
// 	bool Valid();	//�ж��Ƿ�Ϸ�  T/F->flag
// 	void Judge();//temp
// 	void Trans_Number0();//����ת��д 0
// 	void Trans_Number1();//��дת���� 1
// 	void Display0();
// 	void Display1();
// };

void Number::Judge()
{
    //��Ҽ��������½��ƾ�ʰ��Ǫ����
    // {"��","Ҽ","��","��","��","��","½","��","��","��","ʰ","��","Ǫ","��","��"} ;
    string temp1 = input;
    int f = 1;//�жϱ�ʶ�������ж��Ƿ�ȫΪ���ֻ�λ��ȫΪ����Ϊ0������Ϊ1

    for(int i = 0;i<temp1.size();i = i+2)
    {
    //�и������ַ�
     string a = "";
     a= a+temp1[i]+temp1[i+1];
     //�ж��Ƿ������ֻ�λ
        for(int i = 0;i<15;i++)
        {
            if(a == allChNum[i])
            {
                f = 0;
                break;
            }

        }
        if (f == 1) {
            
            flag = 1;
            return;
            }
        f = 1;
        // cout<<a;//��ӡ��ǰ�����ַ�
    //  ch.push_back(a);
    }
    //������Խ�������
    // if(tf == 1){
    //     cout<<"error";
    // }else{
    //     cout<<"OK";
    // }
    // 
    // for(int i = 0;i<14;i++)
    // {
    //     cout<<bignumber[i];
    // }
    // cout<<"dd";
    // string temp = "";
    // for (auto iter = ch.cbegin(); iter != ch.cend(); iter++) {
    //         string temp = (*iter);
    //         // cout << (*iter) << endl;

    //     }

    flag = 0;
} 

bool jduge(string str)
{

    return 0;
}