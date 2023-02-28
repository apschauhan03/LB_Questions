#include<iostream>
#include<vector>
using namespace std;
void printPairSum(vector<int> array,int sum){
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i+1; j < array.size(); j++)
        {
            if(array[i]+array[j]==sum)
            {
                cout<<"{"<<array[i]<<","<<array[j]<<"}"<<endl;
            }
        }
        
    }
    
}
int main(){
    int n,sum;
    cout<<"Enter the number of elements in the array."<<endl;
    cin>>n;
    vector<int> array(n);
    cout<<"Enter the array."<<endl;
    for (int i = 0; i < array.size() ; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the Sum."<<endl;
    cin>>sum;
    printPairSum(array,sum);
    return 0;
}