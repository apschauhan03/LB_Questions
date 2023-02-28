#include<iostream>
#include<vector>
using namespace std;
vector<int> Union_of_two_arrays(vector<int> a,vector<int> b){

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if(a[i]==b[j])
            {
                b[j] = INT_MIN;//Mark the element to be putted in to avoid any duplicate problems
            }
        }
        
    }
    for (int i = 0; i < b.size() ; i++)
    {
        if(b[i]!=INT_MIN)
            a.push_back(b[i]);
    }
    return a;
}
void printArray(vector<int> a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the Size of the first array."<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the first Array"<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cin>>a[i];
    }
    
    int m;
    cout<<"Enter the Size of the Second array."<<endl;
    cin>>m;
    vector<int> b(m);
    cout<<"Enter the Second Array"<<endl;
    for (int i = 0; i < b.size(); i++)
    {
        cin>>b[i];
    }
    vector<int> union1 = Union_of_two_arrays(a,b);

    printArray(union1);
    
    return 0;
}
