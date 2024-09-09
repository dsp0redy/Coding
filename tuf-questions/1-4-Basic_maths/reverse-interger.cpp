/*
------------------------------
Reverse Integer


Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321

Example 3:

Input: x = 120
Output: 21

 

Constraints:

    -231 <= x <= 231 - 1


------------------------------
*/

#include<iostream>
using namespace std;
class solution{
    public:
        int reverse(int x){
            bool negative = false;
            int ans =0;
            if(x < 0){
                x = abs(x);
                negative = true;
            }
            while(x){
                if(ans > INT_MAX || ans < INT_MIN )    return 0;
                int rem = x%10;
                ans = ans*10+rem;
                x=x/10;
            }
            if (negative) return -ans;
            return ans;
        }
};
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    solution s;
    cout<<s.reverse(n);
    return 0; 
}