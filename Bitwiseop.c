#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_or = 0 ; 
    int max_and=0;
    int max_xor=0;
 for(int i = 1 ; i<=n; i++) { 
        for(int j =i+1; j<=n; j++) {
           //printf("a = %d , b = %d , a&b = %d , a|b = %d , aXorB = %d  \n" , i , j , i&j , i|j  , i^j); 
        
         if(((i&j) < k) && (max_and < (i&j))) {
            max_and = i&j;
               
         }
         if(((i|j) < k) && (max_or < (i|j)) ){         
            max_or = i|j;
              
         }
        if(((i^j) < k) && (max_xor < (i^j))){
             max_xor = i^j;
                    }
        
        }
    }
    printf("%d\n%d\n%d\n " , max_and , max_or , max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
