#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection_Arrays(vector<int> a,vector<int> b){
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if(a[i]==b[j])
            {
                b[j] = -1;//Mark the element to be putted in to avoid any duplicate problems
                ans.push_back(a[i]);
            }
        }
        
    }
    
    return ans;
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

    vector<int> intersect = intersection_Arrays(a,b);

    printArray(intersect);
    
    return 0;
}
