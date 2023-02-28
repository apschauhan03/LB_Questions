#include<iostream>
#include<cstring>
using namespace std;
void to_Uppercase(char ch[],int size)
{
     for (int i = 0; i < size; i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            char temp = ch[i];
            temp = temp - 'a' + 65;
            ch[i] = temp;
        }
    }
    return;
}
void to_Lowercase(char ch[],int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ch[i]>='A'&&ch[i]<='Z')
        {
            char temp = ch[i];
            temp = temp - 'A' + 'a';
            ch[i] = temp;
        }
        
    }
    return;
}
int main()
{
    char ch[50];
    cin>>ch;
    to_Uppercase(ch,strlen(ch));
    cout<<ch<<endl;
    to_Lowercase(ch,strlen(ch));
    
    cout<<INT32_MAX;
    return 0;
}