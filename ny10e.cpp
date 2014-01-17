#include<stdio.h>
#include<cmath>
int main()
{
  int i,j,num,test;
  long long int arr[65];
  
  arr[1] = 10;
  arr[2] = 55;
  for(int i=3;i<=64;i++)
    arr[i] = ((9+i)*arr[i-1])/i;
  scanf("%d",&test);
  while(test--)
  {
    scanf("%d %d",&j,&num);
    printf("%d %lld\n",j,arr[num]);
  }
  return 0;
}

