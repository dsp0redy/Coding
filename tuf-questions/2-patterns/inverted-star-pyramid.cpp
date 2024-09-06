/*
------------------------------
 Problem statement

Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.
Example:

Input: ‘N’ = 3

Output: 

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

*****
 ***
  *

Explanation Of Sample Input 1 :

The first row contains five stars.
The second row contains one space, followed by three stars.
The third row contains two spaces, followed by a star.

Sample Input 2 :

1

Sample Output 2 :

*


------------------------------
*/
#include<iostream>
using namespace std;
void nStarTriangle(int n){
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
    nStarTriangle(n);
    return 0;
}