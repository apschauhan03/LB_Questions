#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[50];
    cin>>ch;
    int i = 0;
    int j = strlen(ch)-1;
    while(i<=j)
    {
        swap(ch[i++],ch[j--]);
    }
    cout<<ch;
    return 0;
}