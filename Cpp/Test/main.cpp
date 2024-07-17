#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int countDup = 0;
        int ret = length;
        for(int i=0; i<length; i++)
        {
                if(i+1 < length & nums[i] == nums[i+1])
                {
                    countDup++;
                    if(countDup >= 2)
                    {
                        ret--;
                        for(int k=i+1; k<length; k++)
                        {
                            nums[k-1] = nums[k];
                        }
                    }
                }
                else countDup = 0;
        }
        return ret;
    }

    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int min = INT_MAX;

        for(int i=0; i<prices.size(); i++)
        {
            if(min > prices[i])
            {
                min = prices[i];
            }
            else
            {
                maxprofit = max(prices[i] - min, maxprofit);
            }
        }
        return maxprofit;
    }
    vector<int> prices = {INT_MAX-1, -4};

bool isPalindrome1(string s) {
        int first = 0;
        int last = s.length() - 1;
        while(last >= first)
        {
            if( !isalpha(s[first]) ) first++;
            else if( !isalpha(s[last]) ) last--;

            else if( tolower(s[first]) == tolower(s[last]) )
            {
                first++;
                last--;
            } else return false;
        }
        return true;
    }

    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}
    string s ="0P";
vector<int> nums = {0,0,1,1,1,1,2,3,3};
uint32_t n;
int main()
{
    while(1)
    {
        cout << "\nnhap n:";
        cin >> n;
        if(n%2 != 0 || n<=0)
        {
            cout << -1;
        }
        else
        {
            int a = n / 2;
            if(a % 2 != 0)
            {
                cout << a << a;
            }
            else
            {
                cout << a-1 << a+1;
            }
        }
    }
    return 0;
}

