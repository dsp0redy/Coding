/*
------------------------------
9. Palindrome Number

Given an integer x, return true if x is a
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

 

Constraints:

    -231 <= x <= 231 - 1

 
Follow up: Could you solve it without converting the integer to a string?
------------------------------
*/

#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        bool isPalindrome(int x){
            if(x < 0)   return false;
            int temp = x;
            int revNum=0;
            while(temp){
                if(revNum > INT_MAX /10 || revNum < INT_MIN /10)    return false;
                int rem = temp %10;
                revNum = revNum*10+rem;
                temp /= 10;
            }
            if(revNum == x)   return true;
            return false;
        }
};
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    solution s;
    cout<<s.isPalindrome(n);
    return 0;
}