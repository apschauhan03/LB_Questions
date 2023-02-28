#include<iostream>
#include<vector>
using namespace std;
int sq_root_int(int n)
{
    int target = n;
    int si = 0;
    int ei = n;
    int mid;
    int ans = INT_MIN;
    while(si<=ei)
    {
        mid = si + (ei - si)/2;
        if (mid*mid==target)
        {
            return mid;
        }
        else if (mid*mid>target)
        {
            ei = mid - 1;
        }
        else
        {
            ans = mid;
            si = mid + 1;
        }
        
    
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number."<<endl;
    cin>>n;
    int ans = sq_root_int(n);
    cout<<"Enter the number of precision values."<<endl;
    int precision;
    cin>>precision;
    float finalAns = ans;
    float step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (float j = finalAns; j*j <= n; j=j+step)
        {
            finalAns = j;
        }
        step = step/10;
    }
    cout<<finalAns<<endl;
    return 0;
}