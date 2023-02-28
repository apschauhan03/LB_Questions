#include<iostream>
#include<vector>
using namespace std;
void insertion_Sort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        // Step1:Fetch
        int element = arr[i];
        for (int j = i-1; j >= 0 ; j--)
        {
            // Step2:Compare
            if(element<arr[j])
            {
                arr[j+1] = arr[j];
                arr[j] = element;//Step3:Copy
            }
            else
                break;
        }
        
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
    insertion_Sort(arr);
    cout<<"The Sorted array using Insertion Sort."<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}