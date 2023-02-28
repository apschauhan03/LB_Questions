#include<iostream>
using namespace std;
int main(){
    int col,row;
    cout<<"Enter the number of columns"<<endl;
    cin>>col;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
    return 0;
}