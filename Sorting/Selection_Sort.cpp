#include<iostream>
#include<vector>
using namespace std;
void selection_Sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = INT_MAX;
        int index = -1;
        for (int j = i; j < arr.size(); j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                index = j;
            }
        }
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        
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
    selection_Sort(arr);
    cout<<"The Sorted array using Selection Sort."<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}