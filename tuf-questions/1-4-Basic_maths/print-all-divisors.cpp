/*
------------------------------
Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

Example 1:

Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15

Example 2:

Input:
N = 5
Output:
21
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6
ans = F(1) + F(2) + F(3) + F(4) + F(5)
    = 1 + 3 + 4 + 7 + 6
    = 21

Your Task:  
You don't need to read input or print anything. Your task is to complete the function sumOfDivisors() which takes an integer N as an input parameter and returns an integer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 106
------------------------------
*/

#include<iostream>
using namespace std;
class solution{
    public:
        // brute force

        // long long individualDivisorsSum(int n){
        //     long long sum=0;
        //     for(int i=1;i<=n;i++){
        //         if(n%i == 0)    sum+=i;
        //     }
        //     return sum;
        // }
        // long long sumOfDivisors(int n){
        //     long long res=0;
        //     for(int i=1;i<=n;i++){
        //         res+= individualDivisorsSum(i);
        //     }
        //     return res;
        // }

        // optimal approach
//         logic :// Guys I will just try to give Idea here :

// suppose we are given N = 5 ,

//   Now we have to find factors of 1, 2,3,4,5 that will be 

//   f1 = 1, f2 = 1 + 2 , f3 = 1 + 3, f4 = 1+2+4, f5 = 1+5, and then we try to sum them so ans will be 

//    ans  =  f1 + f2 + f3 + f4 + f5 

//           = 1 + (1 + 2) + (1 + 3) + (1 + 2 + 4) + (1 + 5)  // equals  21 

//           now club alike terms

//         = (1x5) + (2x2) + (3x1) + (4x1)+(5x1) // remains 21

//         now this part does the main trick  and here I will do some rewriting as 

//        = (1 x (5/1) ) + (2 x(5/2)) + (3x(5/3)) + (4 x (5/4)) + (5x(5/5))  //still remains 21

//       # here I am doing floor division so example 3/2 = 1 and 7/3 =2

        long long sumOfDivisors(int n){
            int ans=0;
            for(int i=1;i<=n;i++){
                ans+=(i*(n/i));
            }
            return ans;
        }
};
int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    solution s;
    cout<<s.sumOfDivisors(n);
    return 0;
}