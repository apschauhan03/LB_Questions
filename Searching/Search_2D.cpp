#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool binary_Search2D(vector<vector<int> > arr,int key)
{
    int si = 0;
    int n = arr.size();
    int m = arr[0].size();
    int size = n*m;
    int ei = n*m - 1;//Since its stored in memory as one dimensional array
    int mid;
    while (si<=ei)
    {
        mid = si + (ei-si)/2;
        int rowIndex = mid/m;//Logical
        int colIndex = mid%m;
        if (arr[rowIndex][colIndex]==key)
        {
            return true;
        }
        else if(arr[rowIndex][colIndex]>key)
        {
            ei = mid - 1;
        }
        else
        {
            si = mid + 1;
        }
        
    }
    return false;
}

int main()
{
    int n,m;
    cout<<"Enter the number of rows and column in the array."<<endl;
    cin>>n>>m;
    cout<<"Enter the 2D array."<<endl;
    vector<vector<int> > arr(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int key;
    cout<<"Enter the key."<<endl;
    cin>>key;
    bool ans = binary_Search2D(arr,key);
    if (ans)
    {
        cout<<"Found"<<endl;
    }
    else
        cout<<"Not Found"<<endl;
    return 0;
}