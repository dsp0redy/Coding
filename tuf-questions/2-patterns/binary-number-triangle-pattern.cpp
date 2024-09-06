/*
------------------------------
 Problem statement

Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.

You are required to print the pattern as shown in the examples below.
Example:

Input: ‘N’ = 3

Output: 

1
0 1
1 0 1

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1  <= N <= 20
Time Limit: 1 sec

Sample Input 1:

3

Sample Output 1:

1
0 1
1 0 1

Sample Input 2 :

4

Sample Output 2 :

1
0 1
1 0 1
0 1 0 1

Sample Input 3 :

6

Sample Output 3 :

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 


------------------------------
*/
#include<iostream>
using namespace std;
void nBinaryTriangle(int n){
    int count;
    for(int i=1;i<=n;i++){
        if(i%2 == 0)    count=2;
        else count=1;
        for(int j=1;j<=i;j++){
            if(count == 2){
                cout<<"0 ";
                count =1;
            }
            else{
                cout<<"1 ";
                count++;
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    nBinaryTriangle(n);
    return 0;
}