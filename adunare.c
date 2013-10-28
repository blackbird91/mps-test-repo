#include <stdion.h>

int main()

	int c, d, 
	for ( i = 0 ; i < m ; i++ )
      		for ( j = 0 ; j < n ; j++ )
         		sum[i][j] = first[i][j] + second[i][j];
 
   printf("Sum of entered matrices:-\n");
 
   for ( c = 0 ; c < m ; c++ )
   {
   	for ( d = 0 ; d < n ; d++ )
        	printf("%d\t", sum[c][d]);

      printf("\n");
   }

return 0;
}
