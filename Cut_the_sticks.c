/*
Problem Statement
You are given N sticks, where the length of each stick is a positive integer.
A cut operation is performed on the sticks such that all of them are reduced by the length of the smallest stick.
Suppose we have six sticks of the following lengths:
5 4 4 2 2 8
Then, in one cut operation we make a cut of length 2 from each of the six sticks.
For the next cut operation four sticks are left (of non-zero length), whose lengths are the following:
3 2 2 6
The above step is repeated until no sticks are left.
Given the length of N sticks, print the number of sticks that are left before each subsequent cut operations.
Note: For each cut operation, you have to recalcuate the length of smallest sticks (excluding zero-length sticks).
Input Format 
The first line contains a single integer N. 
The next line contains N integers: a0, a1,...aN-1 separated by space, where ai represents the length of ith stick.
Output Format 
For each operation, print the number of sticks that are cut, on separate lines.
Constraints 
1 ≤ N ≤ 1000 
1 ≤ ai ≤ 1000
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* this guy will get no of element from thge array*/
int get_elem(int *a){
    int temp = 0;
    while(a[temp]){
        temp++;
    }
    return temp;
}

/* this guy will push all the zeros to the end */
void fill_hole(int *a, int iter){
    int last = iter-1;
    int hole = 0;
    int temp = 0;

    while(a[last]==0){
        last--;
    }
    while(hole<last){

        if(a[hole] == 0){
        temp    = a[last];
        a[last] = a[hole];
        a[hole] = temp;
        }
        while(a[last]==0){
        last--;
        }
        hole++;

    }

}
    
int main() {

    int n = 0,j = 0,k = 0,temp = 0;          //no od inputs
    int a[1000] = {0,};                      //storage
    int i,ii = 0;                            //itrator
    int iter;
    int min;
    scanf("%d",&n);

    int count = 0;                            //counter
    while(n--){
        scanf("%d",&a[i]);
        if(a[i] == 0){
        continue; //overwrite if zero
        }
        i++;
    }
    iter = get_elem(a);
    
    for(i=0;i<=iter;i++){
        /* get minimun elem and store it a[i] */
        for(j= 1;j<iter;j++){

            if(a[0]>a[j]){
                temp = a[0];
                a[0] = a[j];
                a[j] = temp;
            }
        }
        min = a[0];
        /*cut the stick */
        for(k=0;k<iter;k++){
            a[k] = a[k]-min;
            count++;
        }
        /*printf it here*/
        printf("%d\n",count);
        fill_hole(a,iter);
        iter = get_elem(a);
        count = 0;
        i=0;
    }
    return 0;
}
