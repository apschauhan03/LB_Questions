#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[50];
    cout<<"Enter your name."<<endl;
    cin.getline(ch,50);
    int i = 0;
    int length = 0;
    while(ch[i]!='\0')
    {
        length++;
        i++;
    }
    cout<<length<<endl;
    cout<<strlen(ch)<<endl;
}