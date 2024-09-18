#include <stdio.h>
#include <math.h>
int main() {
    int n, num, rem, arm = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n; 
    while (n != 0) {
        rem = n % 10; 
        arm += rem * rem * rem;
        n /= 10;
        digits++; 
    }
    n = num;
    if (num == arm) {
        printf("%d is an Armstrong number.\n",num);
    } else {
        printf("%d is not an Armstrong number.\n",num);
    }
    return 0;
}
