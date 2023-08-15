#include<stdio.h>
int fib_recursive(int n) {
    if(n==1 || n==2 ){
       return n;}
else{ 
    return fib_recursive(n-1) +fib_recursive(n-2); 
}
}
int main(){
  int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    
    
        int result = fib_recursive(n);
        printf("The %dth Fibonacci number is: %d\n", n, result);
}





