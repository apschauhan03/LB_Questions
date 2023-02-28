#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            char print = j+65;
            cout<<print;
        }
        for (int j = i; j>0  ; j--)
        {
            char print = j+65-1;
            cout<<print;
        }
        
        cout<<endl;
    }
    
    
    
    return 0;
}