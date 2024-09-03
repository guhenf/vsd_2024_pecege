#include <stdio.h>

int main(){
    int num;
    for (num = 32; num < 255; num += 1)
    {
        printf("%d: %c\n", num, num);
    }
    return 0;
}