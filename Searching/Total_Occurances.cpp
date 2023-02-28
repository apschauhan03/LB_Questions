#include<iostream>
#include<vector>
using namespace std;

//Automatically
#include<algorithm>



// Manually
// bool BinarySearch(vector<int> arr,int key){
//     int si = 0;
//     int ei = arr.size() - 1;
//     int mid;
//     while (si<=ei)
//     {
//         mid = si + (ei-si)/2;
//         if(arr[mid]==key)
//         {
//             return true;
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
//     return false;
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
    // bool found = BinarySearch(arr,key);
    auto last = upper_bound(arr.begin(),arr.end(),key);
    auto first = lower_bound(arr.begin(),arr.end(),key);
    cout<<"Total number of occurances : "<<last-first;//Here +1 if doing manually because of indexing
    
    return 0;

}