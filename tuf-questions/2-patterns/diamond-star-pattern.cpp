/*
------------------------------
 Problem statement

Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.
Example:

Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1  <= N <= 20
Time Limit: 1 sec

Sample Input 1:

3

Sample Output 1:

  *
 ***
*****
*****
 ***
  *    

Sample Input 2 :

1

Sample Output 2 :

*
*

------------------------------
*/
#include<iostream>
using namespace std;
void nStarDiamond(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--) cout<<" ";
        for(int k=1;k<=i;k++)   cout<<"*";
        for(int m=1;m<i;m++)    cout<<"*";
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=n;j>i;j--)    cout<<" ";
        for(int k=i;k>=1;k--)   cout<<"*";
        for(int m=i-1;m>=1;m--) cout<<"*";
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    nStarDiamond(n);
    return 0;
}