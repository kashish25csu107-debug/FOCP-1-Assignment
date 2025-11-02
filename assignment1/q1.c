#include<stdio.h>
#include<math.h>
int main() {
    int num ,originalNum ,remainder ,n=0;
    double sum=0.0;

    //input number from user
    printf("Enter an integer: ");
    scanf("%d",&num);
    
    originalNum=num;
//calculate the number of digits
while(originalNum!=0) {
    originalNum /= 10;
    ++n;


}

originalNum =num;
//calculate sum of digits raised to power n
while(originalNum !=0) {
    remainder =originalNum% 10;
    sum += pow(remainder,n);

}

//checks if sum equals  original number
if ((int)sum == num)
printf("%d is an armstrong number" ,num);
else
{
    printf("%d is not an armstrong number: ", num);

}

return 0;
}