#include<iostream>
#include<string>
using namespace std;
string remove_AdjacentDuplicates(string &str)
{
     string ans="";
        
        for(int i=0;i<str.size();i++)
        {   
            if(ans.length()==0)
                ans.push_back(str[i]);

            else if(ans[ans.length()-1]==str[i])
                ans.pop_back();

            else
                ans.push_back(str[i]);
        }
        return ans;
}
int main()
{
    string str;
    cout<<"Enter the string."<<endl;
    getline(cin,str);
    string ans = remove_AdjacentDuplicates(str);
    cout<<ans;
    return 0;
}