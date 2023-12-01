#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char *s = malloc(1024 * sizeof(char)); 
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s) + 1);
  int freq[127] = {0}; 
  
  for( int i = 0 ; i <strlen(s); i++) 
  { 
    
    int currentChar = (int)s[i]; 
    
    if(currentChar >= 48 && currentChar <= 58 ) {   
    freq[currentChar]++; 
    }

  }
  
  for( int i = 48 ; i <58; i++) 
  { 
    char c = (char)i;
    printf("%d " , freq[i]);
    
  }
  
}