/*
------------------------------
Problem statement

Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.
Example:

Input: ‘N’ = 3

Output: 
*         *
* *     * *
* * * * * *
* *     * *
*         *

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1  <= N <= 25
Time Limit: 1 sec

Sample Input 1:

3

Sample Output 1:

*         *
* *     * *
* * * * * *
* *     * *
*         *

Sample Input 2 :

1

Sample Output 2 :

*


------------------------------
*/
#include<iostream>
using namespace std;
void symmetry(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)   cout<<"* ";
        for(int m=n;m>i;m--)    cout<<"    ";
        for(int k=1;k<=i;k++)   cout<<"* ";
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=n-1;j>=i;j--) cout<<"* ";
        for(int k=1;k<=i;k++)   cout<<"    ";
        for(int m=n-1;m>=i;m--) cout<<"* ";
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    symmetry(n);
    return 0;
}