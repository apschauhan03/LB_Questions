#include<iostream>
#include<vector>
using namespace std;

//Automatically
#include<algorithm>



// Manually
int BinarySearch(vector<int> arr){
    int si = 0;
    int ei = arr.size() - 1;
    int mid;
    while (si<ei)
    {
        mid = si + (ei-si)/2;
        // Cheak mid-1 and mid+1 because they will go out of the array
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            return arr[mid];
        }
        else if(arr[mid-1]>arr[mid])
        {
            ei = mid ;//would miss a peak in mid-1;
        }
        else
        {
            si = mid+1;
        }
    }
    return -1;
}

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
    int found_Element = BinarySearch(arr);
    cout<<"The peak Element : "<<found_Element<<endl;
    return 0;

}