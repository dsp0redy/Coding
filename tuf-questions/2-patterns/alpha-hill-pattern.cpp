/*
------------------------------
 Problem statement

Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

For every value of ‘N’, help sam to return the corresponding Alpha-Hill.
Example:

Input: ‘N’ = 3

Output: 
    A
  A B A
A B C B A

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1  <= N <= 25
Time Limit: 1 sec

Sample Input 1:

3

Sample Output 1:

    A
  A B A
A B C B A

Sample Input 2 :

1

Sample Output 2 :

A


------------------------------
*/
#include<iostream>
using namespace std;
void alphaHill(int n){
    char letter = 'A';
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--) cout<<"  ";
        for(int k=1;k<=i;k++)   cout<<char(letter+k-1)<<" ";
        for(int m=i-1;m>=1;m--)    cout<<char(letter+m-1)<<" ";
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    alphaHill(n);
    return 0;
}