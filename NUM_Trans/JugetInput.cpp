#include<bits/stdc++.h>
#include "type.h"
using namespace std;
// string allChNum[] = {"��","Ҽ","��","��","��","��","½","��","��","��","ʰ","��","Ǫ","��","��"} ;
// string bignumber[]={"��","Ҽ","��","��","��","��","½","��","��","��"} ;
// string digital_units[] ={"ʰ","��","Ǫ","��","��"};

void Number::Judge()
{
    //��Ҽ��������½��ƾ�ʰ��Ǫ����
    // {"��","Ҽ","��","��","��","��","½","��","��","��","ʰ","��","Ǫ","��","��"} ;
    //����Ϊ����+��ĸ








    //����Ϊ����
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
