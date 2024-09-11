/*
------------------------------
Print GFG n times without the loop.

Example:

Input:
5
Output:
GFG GFG GFG GFG GFG

Your Task:
This is a function problem. You only need to complete the function printGfg() that takes N as parameter and prints N times GFG recursively. Don't print newline, it will be added by the driver code.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N) (Recursive).

Constraint:
1<=N<=1000

------------------------------
*/

#include<iostream>
using namespace std;
class solution{
    public:
        void printGfg(int N){
            if(N == 1){
                cout<<"GFG ";
                exit;
            }
            else{
                printGfg(N-1);
                cout<<"GFG ";
            }
        }
};
int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    solution s;
    s.printGfg(n);
    return 0;
}