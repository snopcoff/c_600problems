#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int num;
    int pos;
    printf("Please input a number: ");
    scanf("%d", &num);
    printf("Please input search position: ");
    scanf("%d", &pos);
    char *str = (char*)malloc(sizeof(char) * log10(num) + 2);
    sprintf(str, "%d", num);
    if(pos < 1 || pos > strlen(str)) {
        printf("Invalid position value: %d\n", pos);
        free(str);
        return 1;
    }
    printf("Digit at position %d of number %d: %c\n", pos, num, str[pos - 1]);
    free(str);
    return 0;
}
