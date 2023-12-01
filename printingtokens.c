#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
        
    for(int j = 0; j<strlen(s); j++) { 
        
        if(s[j] == ' ')
            printf("\n"); 
        else 
            printf("%c" , s[j]);   
    }

    return 0;
}
