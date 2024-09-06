/*
------------------------------
 Problem statement

Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.
Example:

Input: ‘N’ = 3

Output: 

A
A B
A B C

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1  <= N <= 20
Time Limit: 1 sec

Sample Input 1:

3

Sample Output 1:

A
A B
A B C

Sample Input 2 :

4

Sample Output 2 :

A
A B
A B C 
A B C D

Sample Input 3 :

7

Sample Output 3 :

A
A B
A B C 
A B C D
A B C D E
A B C D E F
A B C D E F G


------------------------------
*/
#include<iostream>
using namespace std;
void nNumberTriangle(int n){
    char letter = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)   cout<<char(letter+j-1)<<" ";
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    nNumberTriangle(n);
    return 0;
}