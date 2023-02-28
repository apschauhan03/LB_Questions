#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        if(i==0||i==(row-1))
        {
            if(i==0)
            {
                for (int j = 0; j < row-1; j++)
                {
                    cout<<" ";
                }
                cout<<"*";
            }
            else
            {
                for (int j = 0; j < 2*row - 1; j++)
                {
                    cout<<"*";
                }
                
            }
        }
        else
        {
            for (int j = 0; j < (row-i)-1; j++)
            {
                cout<<" ";
            }
            cout<<"*";
            for (int j = 0; j < 2*i-1; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}