#include<iostream>
using namespace std;

int main()
{
    int i;
    string str;
    printf("Enter the time in the format of HH:MM:SS AM\n");
    getline(cin,str);

    // Code for getting the hour 
    int h1 = (int)str[1] - 48;
    int h2 = (int)str[0] - 48;
    int hh = (h2 * 10 + h1 % 10);

    if(str[9]=='A') // This mean time is in AM
    {
        if(hh==12){
            cout<<"00";
            for ( i=2; i <= 7; i++)
                cout << str[i];
        }
        else{
            for(i=0;i<=7;i++){
                cout<<str[i];
            }
        }
    }
    else{
         if (hh == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
        else
        {
            hh = hh + 12;
            cout << hh;
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
    }


    
    return 0;
}