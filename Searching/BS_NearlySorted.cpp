#include<iostream>
#include<vector>
using namespace std;
int Binary_Search(vector<int> arr,int key)
{
    int si = 0;
    int ei = arr.size() - 1;
    while (si<=ei)
    {
        int mid = si + (ei - si)/2;
        if (key==arr[mid])
            return mid;
        
        else if(mid-1>=0&&key==arr[mid-1])
            return mid-1;

        else if(mid+1<arr.size()&&key==arr[mid+1])
            return mid+1;
        
        else
        {
            if (key>arr[mid])
                si = mid + 2;
            
            else
                ei = mid - 2;
        }
        
        
    }
    return false;
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
    int key;
    cout<<"Enter the key."<<endl;
    cin>>key;
    bool ans = Binary_Search(arr,key);
    if (ans)
    {
        cout<<"Found";
    }
    else
        cout<<"Not found";
    return 0;
}