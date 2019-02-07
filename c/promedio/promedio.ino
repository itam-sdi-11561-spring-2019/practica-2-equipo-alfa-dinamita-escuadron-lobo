#include <stdio.h>

main()
{
  int n, i, actual;
  int sum=0;

  clrscr();
  printf("Promedio.n Cuantos numero quieres promediar: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    printf("Numero:")
    scanf("%d",&actual);
    sum=sum+actual;
  }

  sum=sum/n;
  printf("Promedio:"+sum);

  return 0;
}
