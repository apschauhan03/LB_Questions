#include <iostream>
#include <vector>
using namespace std;
int Binary_Search(int divisor, int divident)
{
    if (divisor==0)
    {
        return INT_MAX;
    }
    
    int si = 0;
    int ei = divident;
    int ans = -1;
    while (si <= ei)
    {
        int mid = si + (ei - si) / 2;
        if (mid * divisor == divident)
        {
            ans = mid;
            return mid;
        }
        else if (mid * divisor < divident)
        {
            ans = mid;
            si = mid + 1;
        }
        else
            ei = mid - 1;
    }
    return ans;
}

int main()
{
    int divisor, divident;
    cout << "Enter the divisor and divident respectively." << endl;
    cin >> divisor >> divident;

    int ans = Binary_Search(abs(divisor), abs(divident));
   


    //Decimal value nikalni hai
    float step = 0.1;
    int precision;
    cout<<"Enter the number of precision you want."<<endl;
    cin>>precision;
    float finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (float j = finalAns; j*divisor <= divident; j=j+step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    
    if ((divisor >= 0 && divident >= 0) || (divident < 0 && divisor < 0))
    {
        cout << "The quotient is : " << finalAns;
    }
    else
        cout << "The quotient is : " << -finalAns;
    
    return 0;



}