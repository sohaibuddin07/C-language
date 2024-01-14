//volume of cube of enter a number and output is n*n*n
#include<stdio.h>
int main()  {

    int n;
    printf("Enter the side of cube : ");
    scanf("%d",&n);

    int volume;
    volume = n*n*n;
    printf("Volume of the cube is %d", volume);
    return 0;
    
}