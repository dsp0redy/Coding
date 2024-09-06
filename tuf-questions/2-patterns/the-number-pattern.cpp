/*
------------------------------
Problem statement

Ninja has been given a task to print the required pattern and he asked for your help with the same.

You must print a matrix corresponding to the given number pattern.
Example:

Input: ‘N’ = 4

Output: 

4444444
4333334
4322234
4321234
4322234
4333334
4444444

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1  <= N <= 10^2
Time Limit: 1 sec

Sample Input 1:

3

Sample Output 1:

33333
32223
32123
32223
33333

Sample Input 2 :

5

Sample Output 2 :

555555555
544444445
543333345
543222325
543212345
543222325
543333345
544444445
555555555

Sample Input 3 :

4

Sample Output 3 :

4444444
4333334
4322234
4321234
4322234
4333334
4444444

------------------------------
*/
#include<iostream>
using namespace std;
void getNumberPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)   cout<<(n-j+1);
        for(int k=n-1;k>=i;k--) cout<<(n-i+1)<<(n-i+1);
        for(int o=i;o>1;o--)    cout<<(n-o+2);
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++)   cout<<(n-j+1);
        for(int k=1;k<=i;k++)   cout<<(i+1)<<(i+1);
        for(int m=n-i-1;m>=1;m--)    cout<<(n-m+1);
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    getNumberPattern(n);
    return 0;
}