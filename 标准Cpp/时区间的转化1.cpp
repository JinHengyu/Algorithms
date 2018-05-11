#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;
int difference(char* zone1, char* zone2);
int main()
{
    int i,n;
    char time[9];
    char timezone1[5], timezone2[5];
    int hours, minutes; 
    int newTime; 
    cin>>n; 
    for (i = 0; i < n-1; i++) 
    { 
        cin>>time; 
        switch(time[0])
        {
        case 'n': hours = 12; 
            minutes = 0;
            break;
        case 'm': hours = 0; 
            minutes = 0;
            break;
        default: sscanf(time,"%d:%d", &hours, &minutes); 
            hours %= 12;
            cin>>time; 
            if (time[0] == 'p') hours += 12;
        }
        cin>>timezone1>>timezone2; 
        newTime = hours * 60 + minutes + difference(timezone2, timezone1);
        if (newTime < 0) newTime += 1440; 
        newTime %= 1440;
        switch(newTime)
        {
        case 0 : cout<<"midnight"<<endl; 
            break;
        case 720: cout<<"noon"<<endl; 
            break;
        default : hours = newTime / 60; 
            minutes = newTime % 60; 
            if(hours == 0) 
                cout<<"12:"<<minutes<<' '<<"a.m."<<endl;
            else if(hours < 12) 
                cout<<hours<<":"<<minutes<<' '<<"a.m."<<endl;
            else if(hours == 12) 
                cout<<"12:"<<minutes<<' '<<"p.m."<<endl;
            else 
                cout<<hours%12<<":"<<minutes<<' '<<"p.m."<<endl;
        } 
    } 
    
        cin>>time; 
        switch(time[0])
        {
        case 'n': hours = 12; 
            minutes = 0;
            break;
        case 'm': hours = 0; 
            minutes = 0;
            break;
        default: sscanf(time,"%d:%d", &hours, &minutes); 
            hours %= 12;
            cin>>time; 
            if (time[0] == 'p') hours += 12;
        }
        cin>>timezone1>>timezone2; 
        newTime = hours * 60 + minutes + difference(timezone2, timezone1);
        if (newTime < 0) newTime += 1440; 
        newTime %= 1440;
        switch(newTime)
        {
        case 0 : cout<<"midnight"; 
            break;
        case 720: cout<<"noon";
            break;
        default : hours = newTime / 60; 
            minutes = newTime % 60; 
            if(hours == 0) 
                cout<<"12:"<<minutes<<' '<<"a.m.";
            else if(hours < 12) 
                cout<<hours<<":"<<minutes<<' '<<"a.m.";
            else if(hours == 12) 
                cout<<"12:"<<minutes<<' '<<"p.m.";
            else 
                cout<<hours%12<<":"<<minutes<<' '<<"p.m.";
       }
    return 0;
}
int difference(char* zone1, char* zone2)
{ 
    char zone[32][5]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST",
                "EET","EEST","MSK","MSD","AST","ADT","NST","NDT",
                "EST","EDT","CST","CDT","MST","MDT","PST","PDT",
                "HST","AKST","AKDT","AEST","AEDT","ACST","ACDT", "AWST"};
    float time[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,
                    -7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
    int i, j;
    for (i = 0; strcmp(zone[i], zone1); i++); 
    for (j = 0; strcmp(zone[j], zone2); j++);
    return (int)((time[i] - time[j]) * 60); 
 }

