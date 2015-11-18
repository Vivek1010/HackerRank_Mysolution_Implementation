/*
Problem Statement
Little Bob loves chocolate, and he goes to a store with $N in his pocket.
The price of each chocolate is $C. The store offers a discount:
for every M wrappers he gives to the store, he gets one chocolate for free. 
How many chocolates does Bob get to eat?
Input Format: 
The first line contains the number of test cases, T. 
T lines follow, each of which contains three integers, N, C, and M.
Output Format: 
Print the total number of chocolates Bob eats.
Constraints: 
1≤T≤1000 
2≤N≤105 
1≤C≤N 
2≤M≤N
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int choc   = n/c;
        int wrapper = choc;
        
        while(wrapper >= m){
            choc++;
            wrapper++;
            wrapper-=m;
        }
        printf("%d\n",choc);
    }
    return 0;
}
