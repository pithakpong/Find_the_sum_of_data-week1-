#include <stdio.h> 
int main(){ 
    int number ,index;
    int sum = 0; 
    printf("Enter the number : "); 
    scanf("%d",&number); 
    for(index=0;index<=number;index++){  
        sum += index;

    } 
    printf("sum of range : %d",sum); 
    return 0;
}