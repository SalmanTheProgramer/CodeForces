#include <stdio.h>
#include <stdbool.h>


bool isLucky (int n) {

    while (n > 0) {

        int digit = n % 10;

        if (digit != 4 && digit != 7) {

            return false;
        }

        n /= 10;

    }

    return true;
}

int main() {
    
    int a, b;
    scanf ("%d %d", &a, &b);

    bool isFound = false;

    for (int i=a; i<=b; i++) {

        if (isLucky(i)) {

            printf ("%d ", i);
            isFound = true;

        }
    }

    if (!isFound) {

        printf ("-1");
    }

    return 0;
}