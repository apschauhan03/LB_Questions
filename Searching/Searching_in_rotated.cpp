#include<iostream>
#include<vector>
#include<algorithm>
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
    return -1;
    
}
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
    int key;
    cout<<"Enter the element you want to search in this array."<<endl;
    cin>>key;
    bool ans = binary_search(arr.begin(),arr.begin()+p_element,key);
    bool ans1 = binary_search(arr.begin() + p_element + 1,arr.end(),key);

    if (ans||ans1)
    {
        cout<<"found";
    }
    else
        cout<<"Not found";
    return 0;
}