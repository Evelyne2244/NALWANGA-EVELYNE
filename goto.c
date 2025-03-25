#include <stdio.h>
int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        goto positive;
    
    } else {
        goto negative;
    positive:
        printf("Positive number\n");
        goto end;
    negative:
        printf("Negative number\n");
        goto end;
    end:
        return 0;
    }
}