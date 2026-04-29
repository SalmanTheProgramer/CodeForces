#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);   // taake size of the stringing array

    char str[n];
    scanf ("%s", str);  // taake elements of the stringing array

    int sum = 0;
    // loop to calculate the summation
    for (int i=0; i<n; i++) {

        sum += str[i] - '0';
    }

    // Output 
    printf ("%d", sum);
    
    return 0;
}