#include<iostream>
#include<vector>
using namespace std;
void bubble_Sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < arr.size()-i; j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if (flag)
            break;   
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number of elements."<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Elements."<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    bubble_Sort(arr);
    cout<<"The Sorted array using Bubble Sort."<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}