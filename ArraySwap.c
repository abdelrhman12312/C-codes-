#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

   
  
   for (int j = 0 , k = num-1 ; j<num , k>=0; j++ , k-- )
   {
    
    if((j>k) || (j==k))
    break;

      int temp = arr[k];
      arr[k] = arr[j];
      arr[j] = temp;
   }
   

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
