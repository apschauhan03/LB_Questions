#include<iostream>
#include<vector>
using namespace std;
vector<int> sortZerosandOnes(vector<int> array){
    
    int si = 0,ei = array.size()-1;
    while (si<=ei)
    {
        if(array[si]==1&&array[ei]==0)
        {
            array[si++]=0;
            array[ei--]=1;
        }
        if(array[si]==0){
            si++;
        }
        if(array[ei]==1){
            ei--;
        }
    }
    return array;
    
    
}
int main(){
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    vector<int> array(n);
    cout<<"Enter the array elements."<<endl;
    for (int i = 0; i < array.size(); i++)
    {
        cin>>array[i];
    }
    vector<int> ans = sortZerosandOnes(array);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}