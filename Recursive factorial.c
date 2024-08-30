#include <stdio.h>


int Factorial(int x)
{
    if(x==0 || x==1)
       return 1;
    else
       return (x*(Factorial(x-1)));
}
int main() {
    int n;
 printf( "Enter the Number ");
    scanf("%d", &n);
    printf( "The Factorial of Number is ", Factorial (n));

    return 0;
}
