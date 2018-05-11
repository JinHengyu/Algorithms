#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;
int difference(char* zone1, char* zone2)
{ // ��������ʱ��֮���ʱ��Է���Ϊ��λ
    char zone[32][5]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST",
                "EET","EEST","MSK","MSD","AST","ADT","NST","NDT",
                "EST","EDT","CST","CDT","MST","MDT","PST","PDT",
                "HST","AKST","AKDT","AEST","AEDT","ACST","ACDT", "AWST"};
    float time[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,
                    -7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
    int i, j;
    for (i = 0; strcmp(zone[i], zone1); i++); //�ҵ���һ��ʱ����Ӧ��λ��
    for (j = 0; strcmp(zone[j], zone2); j++); //�ҵ��ڶ���ʱ����Ӧ��λ��
    return (int)((time[i] - time[j]) * 60); //���㲢����ʱ��Է���Ϊ��λ
 }
int main()
{
    int i,n;
    char time[9]; // �����ʱ��
    char timezone1[5], timezone2[5];
    int hours, minutes; // ת��������
    int newTime; //�Է���Ϊ��λ
    cin>>n; // �������������Ŀ
    for (i = 0; i < n; i++) // ��ÿ����������
    { 
        cin>>time; //����ʱ��
        switch(time[0])
        {
        case 'n': hours = 12; // ����Ϊ noon
            minutes = 0;
            break;
        case 'm': hours = 0; // ����Ϊ midnight
            minutes = 0;
            break;
        default: sscanf(time,"%d:%d", &hours, &minutes); // ���� ʱ:��
            hours %= 12;
            cin>>time; // ���� a.m. �� p.m.
            if (time[0] == 'p') hours += 12;
        }
cin>>timezone1>>timezone2; // ����ʱ��
        newTime = hours * 60 + minutes + difference(timezone2, timezone1);
        if (newTime < 0) newTime += 1440; // ��ǰһ�죬������ʱ�����һ�졣
        newTime %= 1440; // �������һ�죬��һ���ʱ���ȥ��
        switch(newTime)
        {
        case 0 : cout<<"midnight"<<endl; // ��ʱ��Ϊ�賿
            break;
        case 720: cout<<"noon"<<endl; // ��ʱ��Ϊ����
            break;
        default : hours = newTime / 60; // ��ʱ���ʱ
            minutes = newTime % 60; //��ʱ��ķ�
            if(hours == 0) // �賿, �ֲ�Ϊ0
                cout<<"12:"<<minutes<<"a.m."<<endl;
            else if(hours < 12) // ����
                cout<<hours<<":"<<minutes<<"a.m."<<endl;
            else if(hours == 12) // ����, �ֲ�Ϊ0
                cout<<"12:"<<minutes<<"p.m."<<endl;
            else // ����
                cout<<hours%12<<":"<<minutes<<"p.m."<<endl;
        } // end of switch
    } //end of for
    return 0;
}

