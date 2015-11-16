/*
Problem Statement
The Utopian Tree goes through 2 cycles of growth every year.
The first growth cycle occurs during the spring, when it doubles in height. 
The second growth cycle occurs during the summer, when its height increases by 1 meter.
Now, a new Utopian Tree sapling is planted at the onset of spring. 
Its height is 1 meter. Can you find the height of the tree after N growth cycles?
Input Format
The first line contains an integer, T, the number of test cases. 
T lines follow; each line contains an integer, N, that denotes the number of cycles for that test case.
Constraints 
1≤T≤10 
0≤N≤60
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t = 0;
    int spring = 2;
    int summer = 1;
    int cycle  = 0;
    int growth = 1;
    
    scanf("%d",&t);
    while(t--){
        
        scanf("%d",&cycle);
        while(cycle){
            if(cycle){
                growth = growth * spring;
                cycle--;
            }
            if(cycle){
                growth = growth + summer;
                cycle--;
            }
        }
        printf("%d\n",growth);
        growth = 1;
        cycle = 0;
    }
    return 0;
}
