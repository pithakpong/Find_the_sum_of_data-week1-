#include <stdio.h> 
int summation(int number){  
    int sum = 0;
    if (number>0){ 
        sum = number +summation(number-1); 
    } else { 
        return 0;
    } 
    return sum;
} 
int main(){ 
    int number;
    printf("Enter the number: "); 
    scanf("%d",&number); 
    int result = summation(number); 
    printf("sum of range : %d",result);
}