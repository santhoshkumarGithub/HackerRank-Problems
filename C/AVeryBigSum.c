#include <stdio.h>

int main()
{
  long int n,i=0,sum=0;
  scanf("%ld", &n);
  long int ar[n];
  for (long int i=0;i<n;++i)
  {
    scanf("%ld", &ar[i]);
    sum+=ar[i];
  }
  printf("%ld",sum); 
  return 0;
}
