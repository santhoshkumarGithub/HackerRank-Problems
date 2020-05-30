#include <stdio.h>

int main() 
{
    long long int sum,max=0,min=0,ar[100];
    int i,j,n=5;
    for(i=0;i<n;++i)
       scanf("%lld",&ar[i]);
    for(i=0;i<n;++i)
    {
      sum=0;
      for(j=0;j<n;++j)
        {
           if(j!=i)
               sum+=ar[j];
        }
        if(sum<min || min==0)
            min=sum;
        if(sum>max)
            max=sum;
    }
    printf("%lld %lld",min,max);
	return 0;
}
