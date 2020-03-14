#include<stdio.h>

void main(){
    int num,rem,cube=0,temp;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;
    while(num > 0){
        rem = num%10;
        cube = cube + rem*rem*rem;
        num = num/10;
    }
    if (temp == cube){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}   