#include <stdio.h>
int main() {

    int side;
    printf("Side of a square : ");
    scanf("%d\n",&side);

    int area;
    area = side * side;
    printf("Area of the Square is %d",area);
    return 0;
}