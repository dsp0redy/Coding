/*
------------------------------
Given an integer n, calculate the sum of series 1  + 2  + 3  + 4  + … till n-th term.

Example 1:

Input:
n=5
Output:
15
Explanation:
1 +2 + 3 +4 +5 =15

Example 2:

Input:
n=7
Output:
28
Explanation:
1 +2 +3 +4 +5 +6 +7 =28


Your Task:
You don't need to read input or print anything. Your task is to complete the function sumOfSeries() which takes the integer n as a parameter and returns the sum of the cubes of the first n natural numbers.




Constraints:
1<=n<=50000
------------------------------
*/
#include<iostream>
#include<math.h>
using namespace std;
class solution{
    public:
        long long sumOfSeries(long long n){
            if(n==1)    return 1;
            return n+sumOfSeries(n-1);
        }
};
int main(){
    long long n;
    cout<<"Enter the value of n :";
    cin>>n;
    solution s;
    cout<<s.sumOfSeries(n);
    return 0;
}