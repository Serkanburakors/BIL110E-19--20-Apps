#include <stdio.h>

int multiple (int a, int b);

int main (void) {
    int s1 , s2;
    printf("Enter two integers.\n"); 
    scanf("%d%d", &s1, &s2);
    multiple(s1,s2);
    return 0;
}

int multiple (int a, int b) {
    if (b%a==0) {
        return 1;
    }
    else {
        return 0;
    }
}

