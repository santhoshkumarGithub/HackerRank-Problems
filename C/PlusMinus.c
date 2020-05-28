#include <stdio.h>

int main() 
{
  int a=0,b=0,c=0,n,i=0;
  int ar[100];
  float ratio1,ratio2,ratio3;
  scanf("%d",&n); 
  
  for (int i=0;i<n;++i)
  {
    scanf("%d", &ar[i]);
    if(ar[i]>0)
    {
     ++a;
    }
  }    
  ratio1=(float)a/(float)n;
  printf("%f\n",ratio1);
  
  for (int i=0;i<n;++i)
  {
    scanf("%d", &ar[i]);
    if(ar[i]<0)
    {
     ++b;
    }
  } 
  ratio2=(float)b/(float)n;
  printf("%f\n",ratio2);
  
  for (int i=0;i<n;++i)
  {
    scanf("%d", &ar[i]);
    if(ar[i]==0)
    {
     ++c;
    }
  }
  ratio3=(float)c/(float)n;
  printf("%f\n",ratio3);
  
  return 0;
}


