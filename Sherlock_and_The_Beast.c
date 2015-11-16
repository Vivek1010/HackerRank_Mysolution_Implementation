//code didn't pass all the test cases 

/*
Problem Statement
Sherlock Holmes is getting paranoid about Professor Moriarty, 
his arch-enemy. All his efforts to subdue Moriarty have been in vain.
These days Sherlock is working on a problem with Dr. Watson.
Watson mentioned that the CIA has been facing weird problems with their supercomputer, 'The Beast', recently.
This afternoon, Sherlock received a note from Moriarty, saying that he has infected 'The Beast' with a virus. Moreover, the note had the number N printed on it. After doing some calculations, Sherlock figured out that the key to remove the virus is the largest Decent Number having N digits.
A Decent Number has the following properties:
3, 5, or both as its digits. No other digit is allowed.
Number of times 3 appears is divisible by 5.
Number of times 5 appears is divisible by 3.
Meanwhile, the counter to the destruction of 'The Beast' is running very fast. Can you save 'The Beast', and find the key before Sherlock?
Input Format
The 1st line will contain an integer T, the number of test cases. This is followed by T lines, each containing an integer N. i.e. the number of digits in the number. 
Output Format
Largest Decent Number having N digits. If no such number exists, tell Sherlock that he is wrong and print −1.
Constraints
1≤T≤20
1≤N≤100000
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long x = 0;          //no of (5 * X) to be printed
long y = 1;          //no of (3 * Y) to be printed

void print_5(long x){
    int temp = x*3;
    while(temp--){ 
    printf("5");
    }
}
void print_3(long y){
    int temp = y*5;
    while(temp--){ 
    printf("3");
    }
}

int find_max_n(long d){
    int n = 1;
    while((3 * n + 5) < d){
        n++;
    }    
    return n;
}

void find_x_y(long d){
    
    while(1){
        
        if((((3 * x) + (5 * y)) == d) || (x == 0)){
        break;
        }
        
        else if(((3 * x) + (5 * y)) < d){
            y++;
        }
        else if(((3 * x) + (5 * y)) > d){ 
            x--;
            y = 1;
        }
        
    }
    if(x == 0){
        printf("-1");
    }
    else{
        print_5(x);
        print_3(y);
    }
}


int main() {

    int t = 0;          // no of test cases 
    long n = 0;          //max value of x;
    long d = 1;         //no of digits in no
    scanf("%d",&t);
    
    while(t--){
        
        scanf("%ld",&d);
        if(d<3){
            printf("-1\n");
            continue;
        }
        if((d%3) == 0){
            print_5((d/3));
            printf("\n");
            n = 0;
            x = 0;
            y = 1;
            continue;
        }
        
        if((d%5) == 0){
            print_3((d/5));
            printf("\n");
            n = 0;
            x = 0;
            y = 1;
            continue;
        }
           
        n = find_max_n(d);
        x = n;
        find_x_y(d);
        printf("\n");
        
        n = 0;
        x = 0;
        y = 1;
        
    }
    return 0;
}
