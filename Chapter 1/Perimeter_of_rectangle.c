// Calculate the perimeter of rectangle
# include<stdio.h>
int main()  {

    int a,b;
    printf("Enter the side a:");
    scanf("%d",&a);
    printf("Enter the side b :");
    scanf("%d",&b);

    int perimeter;
    perimeter = 2*(a+b);
    printf("Perimeter of rectangle = %d",perimeter);
    return 0;
}