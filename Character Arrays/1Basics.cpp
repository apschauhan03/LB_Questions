#include<iostream>
using namespace std;
int main()
{
    char ch[10];
    cout<<"Enter your name."<<endl;
    //Firstway
    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>ch[i];
        
    // }
    // for (int i = 0; i < 10; i++)
    // {
        
    //     cout<<ch[i];
    // }
    //Turns Abhijit Singh to AbhijitSin

    //Secondway
    // cin>>ch;
    // cout<<ch;//Ignores after the space


    cin.getline(ch,50);
    cout<<ch;
    return 0;

}