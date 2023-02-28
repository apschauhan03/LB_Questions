#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[50];
    cout<<"Enter the statement"<<endl;
    cin.getline(ch,50);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i]==' ')
        {
            ch[i] = '@';
        }
        
    }
    cout<<ch<<endl;
}