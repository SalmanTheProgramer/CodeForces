#include <stdio.h>
#include <stdbool.h>

bool isPrime (int x) {

    if (x <= 1) return false;
    if (x == 2) return true;

    for(int i=2; i*i <= x; i++) {

        if (x%i == 0) {

            return false;
            break;
        }
    }

    return true;
}

int main() {
    
   int t;
   scanf ("%d", &t);

   while (t--) {

        int n; 
        scanf ("%d", &n);

        bool prime = isPrime (n);

        if (!prime) {

            printf ("NO\n");

        }else {

            printf ("YES\n");
        }
    }
    
    return 0;
}