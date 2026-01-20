#include<stdio.h>
#include<math.h>
int numberDigit(int n);
int reverseNumber(int num, int numbDigit);
int main(){
int n,originalNumber,num;
printf("Enter range (1-_) : \n");
scanf("%d",&n);
for(int i=1; i<=n; i++){
originalNumber=i;
num=originalNumber;
int numbDigit;
numbDigit=numberDigit(i);
int revNumber=reverseNumber(num,numbDigit);
if(revNumber==originalNumber){
printf("Number of digits = %d.\n",numbDigit);
printf("%d is an Armstrong Number.\n",originalNumber);
}
}
return 0;
}
int numberDigit(int n){
int digit=0;
while(n != 0){
digit++;
n/=10;
}
return digit;
}
int reverseNumber(int num, int numbDigit){
int sum=0;
while(num != 0){
sum+=(round(pow(num%10,numbDigit)));
num/=10;
}
return sum;
}