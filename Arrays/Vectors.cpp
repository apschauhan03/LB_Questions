#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> arr;
    // cout<<arr.size()<<" "<<arr.capacity()<<endl;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(2);
    // arr.push_back(2);
    // arr.push_back(2);
    // arr.push_back(2);

    // cout<<arr.size()<<" "<<arr.capacity()<<endl;





    // vector<int> arr(10);
    // cout<<arr.size()<<" "<<arr.capacity()<<endl;//Explicitaly mentioned will be done as this

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i];//All of them will be zero
    // }



    //Initialising with 2
    vector<int> arr(10,2);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;//Explicitaly mentioned will be done as this

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];//All of them will be zero
    }
    


    

    return 0;
}