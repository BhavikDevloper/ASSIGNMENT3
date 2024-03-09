
/*27. 1 2 3 6 9 18 27 54*/
#include <stdio.h>
int main() {
    int n, i, num = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The sequence is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", num);
        if (num == 1 || num == 2 || num == 3)
            num++;
        else
            num *= 2;
    }
}

