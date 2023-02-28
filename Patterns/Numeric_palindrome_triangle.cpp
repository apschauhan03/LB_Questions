#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i-1; j++)
        {
            cout<<" ";            
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1;
        }
        for (int j = i; j > 0 ; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
    
    
    
    return 0;
}