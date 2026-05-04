#include<stdio.h>
int reverse(int n);
void isPalindrome(int n);
double fact(int i);
double recFact(int n);
void fibonacci(int n);
int recFibonacci(int n);
void isPrime(int n);
int sumDigits(int n);
int LCM(int n);
int GCD(int n);
void swap(int n);
void Swap_temp(int n);
int Largest_3(int n);
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    // printf("Reverse number=%d\n",reverse(n));
    // isPalindrome(n);
    //printf("Factorial of %d = %.2f.\n", n, fact(n));
    //printf("Factorial of %d = %.2f.\n", n, recFact(n));
    //fibonacci(n);
    // printf("\n");
    // for(int i=1; i<=n; i++){
    //     printf("%d ",recFibonacci(i));
    // }
    // printf("\n");
    //isPrime(n);
    //printf("Sum of digits of %d = %d .\n", n, sumDigits(n));
    return 0;
}

int reverse(int n){
int rem ,rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
}

void isPalindrome(int n){
    int rev=reverse(n);
    if(n==rev)
        printf("%d is palindrome.\n", n);
    else
        printf("%d is not palindrome.\n", n);
}

double fact(int i){
    double f=1;
    for(i; i>=1; i--){
        f*=i;
    }
    return f;
}

double recFact(int n){
    if(n==0)
        return 1;
    return n*recFact(n-1);
}

void fibonacci(int n){
    int f1=0, f2=1;
    if(n==1)
        printf("%d ", f1);
    else if(n==2)
        printf("%d %d ", f1, f2);
    else{
        printf("%d %d ", f1, f2);
        for(int i=3, temp; i<=n; i++){
            temp=f2;
            f2+=f1;
            f1=temp;
            printf("%d ", f2);
        }
    }
}

int recFibonacci(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return recFibonacci(n-1)+recFibonacci(n-2);
}

void isPrime(int n){
    if(n<=0)
        printf("Enter positive number.\n");
    else if(n==1)
        printf("1 is prime nor composite.\n");
    else{
        for(int i=2; i<n; i++){
            if(n%i==0){
                printf("%d is composite.\n", n);
                return;
            }
        }
        printf("%d is prime.", n);
    }
}

int sumDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}