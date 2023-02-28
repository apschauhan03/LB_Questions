//Can be done using linear search
//but if the array given is sorted then can be done using the binary Search too
#include<iostream>
#include<vector>
//Automatically
#include<algorithm>
using namespace std;



// Manually
// int first_Occurrance(vector<int> arr,int key){
//     int si = 0;
//     int ei = arr.size() - 1;
//     int mid;
//     int index = -1;
//     while (si<=ei)
//     {
//         mid = si + (ei-si)/2;
//         if(arr[mid]==key)
//         {
//             index = mid;
//             ei = mid - 1;
//         }
//         else if(key>arr[mid])
//         {
//             si = mid + 1;
//         }
//         else
//         {
//             ei = mid - 1;
//         }
//     }
//     return index;
    
// }

int main(){
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array."<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key."<<endl;
    cin>>key;
    // int index = first_Occurrance(arr,key);
    auto ans_Address = lower_bound(arr.begin(),arr.end(),key);
    cout<<"First index is : "<<ans_Address - arr.begin();
    
    return 0;

}