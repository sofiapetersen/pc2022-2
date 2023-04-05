#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);
int fib(int n);


int main(){

int num;
    scanf("%d", &num);
    printf("fat: %d", fatorial(num));
    printf("\nfib: %d", fib(num));
    return 0;
}

int fatorial(int n){
    if ((n==0)||(n==1))
    return 1;
    else
    return n*fatorial(n-1);
}

int fib(int n){
    if((n==1)||(n==2))
    return 1;
    else
    return fib(n-1) + fib(n-2);
}