#include <stdio.h>

int main(){

int count;
int marks;
int sum=0;
int i;

printf("Enter your subjects: ");
scanf("%d",&count);

for(i=1;i<=count;i++){
    printf("Enter the marks of %d subject: ",i);
    scanf("%d",&marks);
    sum+=marks;
}
printf("\nMarks: %d",sum);

float percentage = sum/count;
printf("\nPercentage: %1.f",percentage);
return 0;
}
