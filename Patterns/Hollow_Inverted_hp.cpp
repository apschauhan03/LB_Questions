#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        if(i==0)
        {
            for (int j = 0; j < row; j++)
            {
                cout<<"*";
            }
            
        }
        else if (i==row-1)
        {
            cout<<"*";
        }
        
        else{
            cout<<"*";
            for (int j = 0; j < (row-i)-2; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}