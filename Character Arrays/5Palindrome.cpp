#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[50];
    cin>>ch;
    bool flag = true;
    int i = 0;
    int j = strlen(ch)-1;
    while(i<=j)
    {
        if (ch[i++]!=ch[j--])
        {
            flag = false;
            break;
        }
        
    }
    if (flag)
    {
        cout<<"The given character array is palindrome."<<endl;
    }
    else
        cout<<"The given character array is not palindrome."<<endl;  
    return 0;
}