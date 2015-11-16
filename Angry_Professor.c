/*
Problem Statement
The professor is conducting a course on Discrete Mathematics to a class of N students.
He is angry at the lack of their discipline, and he decides to cancel class if there are fewer than K students 
present after the class starts.
Given the arrival time of each student, your task is to find out if the class gets cancelled or not.
Input Format
The first line of input contains T, the number of test cases. Each test case contains two lines. 
The first line of each test case contains two space-separated integers, N and K. 
The next line contains N space-separated integers, a1,a2,…,aN, representing the arrival time of each student.
If the arrival time of a given student is a non-positive integer (ai≤0), 
then the student enters before the class starts.
If the arrival time of a given student is a positive integer (ai>0), 
the student enters after the class has started.
Output Format
For each test case, print "YES" (without quotes) if the class gets cancelled.
Otherwise, print "NO" (without quotes).
Constraints
1≤T≤10
1≤N≤1000
1≤K≤N
−100≤ai≤100,where i∈[1,N]
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int t = 0;          //no of test
    int n = 0;          //of of strudent
    int k = 0;          //minimum strudent
    int count = 0;      //counter
    int i = 0;
    int a[1000] = {0,}; //time of arrival
    
    scanf("%d",&t);
    
    while(t--){
        
        scanf("%d", &n);
        scanf("%d" ,&k);
        while(n--){
            scanf("%d",&a[i]);
            if(a[i] <= 0){
                count++;
            }
            i++;
        }
        
        if(count >= k){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
        memset(a,0,sizeof(a));
        i = 0;
        count = 0;
        
    }  
    return 0;
}
