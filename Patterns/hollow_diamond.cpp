#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i - 1 ; j++)
        {
            cout<<" ";
        }
        if(i==0)
            cout<<"*";
        else
        {
            cout<<"*";
            for (int j = 0; j < 2*(i-1)+1; j++)
            {
                cout<<" ";
            }
            cout<<"*";
            
        }
        cout<<endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        if(i==row-1)
            cout<<"*";
        else{
            cout<<"*";
            for (int j = 0; j < 2*(row-i-1)-1; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}