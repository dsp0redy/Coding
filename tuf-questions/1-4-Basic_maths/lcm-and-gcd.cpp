/*
------------------------------
Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.

Example 1:

Input: a = 5 , b = 10
Output: 10 5
Explanation: LCM of 5 and 10 is 10, while their GCD is 5.

Input: a = 14 , b = 8
Output: 56 2
Explanation: LCM of 14 and 8 is 56, while their GCD is 2.

Expected Time Complexity: O(log(min(a, b))
Expected Auxiliary Space: O(1)

Constraints:
1 <= a, b <= 109
------------------------------
*/

#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        vector<long long> lcmAndGcd(long long a, long long b){
            vector<long long> ans;
            long long lcm ,gcd,A=a,B=b;
            while(a > 0  && b > 0){
                if(a > b)   a-=b;
                else    b-=a;
            }
            if(a==0)    gcd =b;
            else    gcd=a;
            lcm=(A*B)/gcd;
            ans.push_back(lcm);
            ans.push_back(gcd);
            return ans;
        }
};
int main(){
    long long a,b;
    cout<<"Enter the numbers a and b : ";
    cin>>a>>b;
    solution s;
    vector<long long> r = s.lcmAndGcd(a,b);
    for(auto it:r){
        cout<<it<<endl;
    }
    return 0;
}