#include <stdio.h>

int main() {
    
    char str[100001]; // ***To submit in Codeforce, use 10000001
    scanf ("%s", str);  // take string

    int count[26] = {0};    // take constant Frequency array

    // loop to count alphabets
    for (int i=0; str[i] != '\0'; i++) {

        int val = str[i] - 'a';
        count[val]++;

    }

    // Output
    for (int i=0; i<26; i++) {

        if (count[i] > 0) {     // to skip the null elements

            printf ("%c : %d\n", i + 'a', count[i]);

        }
    }
    
    

//    char str[1000005];   // smaller buffer for testing
//     scanf("%s", str);

//     int count[26] = {0};

//     for (int i = 0; str[i] != '\0'; i++) {
//         int val = str[i] - 'a';
//         if (val >= 0 && val < 26) {
//             count[val]++;
//         }
//     }

//     for (int i = 0; i < 26; i++) {
//         if (count[i] > 0) {
//             printf("%c : %d\n", i + 'a', count[i]);
//             fflush(stdout); // force flush
//         }
//     }

    return 0;
}
