#include <stdio.h>

int stringCNT (char s[], int i) {

    if (s[i] == '\0') return 0; // base case

    int ans = stringCNT (s, i+1);   // recursive case

    if (s[i] >= 'A' && s[i] <= 'Z') {   // converting Upper case to lower case

        s[i] = s[i] + 32;
    }

    // counting vowels
    if (s[i]=='a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u') {

        return ans+1;
    
    }else {

        return ans;
    }
} 

int main() {
    
    char s[201];
    fgets (s, 201, stdin);

   // int cnt = stringCNT (s, 0);

    printf ("%d", stringCNT (s, 0));
    
    return 0;
}