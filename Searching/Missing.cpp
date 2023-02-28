#include<iostream>
#include<vector>
using namespace std;
int missing(vector<int> arr)
{
    int si = 0;
    int ei = arr.size() - 1;
    while (si>ei)
    {
        int mid = si + (ei - si)/2;
        if (arr[mid]!=arr[mid-1]+1&&mid-1>=0)
        {
            
        }
        else if (arr[mid+1]!=arr[mid]+1&&mid+1<arr.size())
        {
            
        }
        else
        {
            
        }
        
        
    }
    
}
int main(){
    int n;
    cout<<"Enter the number of elements in the sorted array."<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Elements of the array."<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    int missing_value = missing(arr);
    cout<<"The missing number is: "<<missing_value<<endl;
    return 0;
}