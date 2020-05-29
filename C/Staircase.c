#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    
	int ht,wd,g,n;
	scanf("%d",&n);
	for(ht=1;ht<n+1;++ht)
    {
      for(wd=1;wd<=n-ht;++wd)
        {
         printf(" ");  
        }
      for(g=ht;g>0;--g)
        {
         printf("#");
        }       
      printf("\n");
    }
	return 0;
}
