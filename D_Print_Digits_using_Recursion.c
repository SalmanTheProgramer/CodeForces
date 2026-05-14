#include <stdio.h>

void fun (int n) {

    if (n == 0) return; // base case

    int x = n%10;

    fun (n/10); // recursive case

    printf ("%d ", x);
}

int main() {
    
    int t; 
    scanf ("%d", &t);

    // execution against test cases
    while (t--) {

        int n;
        scanf ("%d", &n);

        fun (n);

        if (n == 0) printf ("0");


        printf ("\n");
    }
    
    return 0;
}