#include <stdio.h>
int calculaterectanglearea(int length,int width);

int main() {
    int length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    
    area=calculaterectanglearea(length, width);
    
    printf("The area of the rectangle is: %d\n", area);

}
int calculaterectanglearea(int length, int width) {
    return length * width;
}


