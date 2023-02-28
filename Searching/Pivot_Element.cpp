#include<iostream>
#include<vector>
using namespace std;
int pivot_element(vector<int> arr){
    int si = 0;
    int ei = arr.size()-1;
    while (si<=ei)
    {
        int mid = si + (ei-si)/2;
        if (mid+1<arr.size()&&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if (mid-1>=0&&arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
        else
        {
            if (arr[ei]<arr[mid])
            {
                si = mid+1;
            }
            else
            {
                ei = mid-1;
            }
        }
        
    }
    return 0;
    
}-
int main(){
    int n;
    cout<<"Enter the number of elements in array."<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array."<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    int p_element = pivot_element(arr);
    cout<<"The pivot element is : "<<p_element<<endl;
    return 0;
}