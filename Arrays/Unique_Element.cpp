#include<iostream>
#include<vector>
using namespace std;
int unique_element(vector<int> arr){
    int element = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        element = element ^ arr[i];
    }
    return element;
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
    int unique_Element = unique_element(arr);
    cout<<unique_Element<<endl;
    return 0;
}