#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
 {
    int n,len;
  cin >> n;
cin.ignore();
if(1<=n && n<=100)
{
   vector<string> strings(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, strings[i]);
    }
    for (int i = 0; i < n; i++)
    {
        len=strings[i].length();
        if(len>10)
        {
             string cab;
            cab=strings[i];
            cout<< cab.operator[](0)<<len-2<<cab.operator[](len-1)<<endl;
        }
        else
        {
            cout<< strings[i]<<endl;
        }

    }
}
    return 0;
}
