#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int max;

 	printf("-: CHECK MAX VALUE :-\n");
 
    printf("Enter four numbers: ");
    scanf("%d", &num1);

	printf("Enter four numbers: ");
    scanf("%d", &num2);
    
    printf("Enter four numbers: ");
    scanf("%d", &num3);
    
    printf("Enter four numbers: ");
    scanf("%d", &num4);
    
    if (num1 >= num2) {
        if (num1 >= num3) {
            if (num1 >= num4) {
                max = num1;
            } else {
                max = num4;
            }
        } else {
            if (num3 >= num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    } else {
        if (num2 >= num3) {
            if (num2 >= num4) {
                max = num2;
            } else {
                max = num4;
            }
        } else {
            if (num3 >= num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}

