#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        if(i==0)
            cout<<1;
        else if (i==row-1)
        {
            for (int j = 0; j < row; j++)
            {
                cout<<j+1;
            }
            
        }
        else
        {
            cout<<1;
            for (int j = 0; j < i-1; j++)
            {
                cout<<" ";
            }
            cout<<i+1;
        }
        
        cout<<endl;
    }
    
    
    
    
    return 0;
}