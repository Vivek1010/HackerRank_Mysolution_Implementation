/*
Problem Statement
You are given an integer N. Find the digits in this number that 
exactly divide N (division that leaves 0 as remainder) and display their count. 
For N=24, there are 2 digits (2 & 4). Both of these digits exactly divide 24. So our answer is 2.
Note
If the same number is repeated twice at different positions, 
it should be counted twice, e.g., For N=122, 2 divides 122 exactly and occurs at ones' and tens' position. 
So for this case, our answer is 3.
Division by 0 is undefined.
Input Format
The first line contains T (the number of test cases), 
followed by T lines (each containing an integer N).
Constraints 
1≤T≤15 
0<N<1010
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t = 0;
    long long n = 0;
    long long count = 0;
    int d = 0;
    long long con_num = 0;    
    scanf("%d",&t);
    while(t--){
        
        scanf("%lld",&n);
        con_num = n;
        while(n){
            d = n%10;
            if(d && con_num%d == 0){
                count++;
            }
            n = n/10;
        }
        printf("%lld\n",count);
        n = 0;
        count = 0;
    }
    return 0;
}
