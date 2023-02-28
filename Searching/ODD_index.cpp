#include<iostream>
#include<vector>
using namespace std;
int ODD_index(vector<int> arr)
{
    int si = 0;
    int ei = arr.size() - 1;
    while(si<ei)
    {
        int mid = si + (ei - si)/2;
        if (mid%2==0)
        {
            if (arr[mid]==arr[mid+1])
            {
                //Left side
                si = mid + 2;
            }
            else if (arr[mid]==arr[mid-1])
            {
                ei = mid;
            }
            else
            {
                return mid;
            }
        }
        else
        {
            if (arr[mid]==arr[mid+1])
            {
                ei = mid;
            }
            else
            {
                si = mid + 1;
            }
        }
        
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements."<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements."<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    int index = ODD_index(arr);
    if (index==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else
        cout<<"Element found at : "<<index<<endl;
    return 0;
}