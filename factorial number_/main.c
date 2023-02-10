#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,f,i;
  printf("Veuillez saisir un nombre n :");
  scanf("%d",&n);
  if(n<0){
    printf("Veuillez entrer un nombre positif");
  }
else if  (n==0){
printf("La factorielle est :1");
}
else {
    f=1;
    for(i=1;i<=n;i++)
        f*=i;
    printf("La factorielle de %d est:%d",n,f);
}
    return  0;
}
