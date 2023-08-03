#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


string str1[] = {"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
int main()
{
    //string n_temp;
    //getline(cin, n_temp);

    int n;

    // Write your code here
    cin >> n;
    if(n<=9)
    {
        cout <<str1[n-1];

    }
    else
    {
        cout <<str1[9];
    }
    return 0;
}
