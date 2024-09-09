/*
------------------------------
 Problem statement

You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.


An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :

1


Sample Output 1 :

true


Explanation of Sample Input 1 :

1 is an Armstrong number as, 1^1 = 1.


Sample Input 2 :

103


Sample Output 2 :

false


Sample Input 3 :

1634


Sample Output 3 :

true


Explanation of Sample Input 3 :

1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634

------------------------------
*/

#include<bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n){
    int resNum=0,temp1=n,temp2=n,count=0;
    while(temp1){
        count++;
        temp1/=10;
    }
    while(temp2){
        int rem = temp2%10;
        resNum+=pow(rem,count);
        temp2/=10;
    }
    if(n == resNum) return true;
    return false;
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<checkArmstrong(n);
    return 0;
}