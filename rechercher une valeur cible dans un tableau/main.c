#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, T[20],x,trouve,i;
    printf("Donnez la taile du tbaleau :");
    scanf("%d",&n);
    printf("Remplissage du tableau\n");
    for(i=0;i<n;i++)
    {
        printf("Donnez la valeur N %d :",i+1);
        scanf("%d",&T[i]);
    }
    printf("Donnez la valuer a chercher dans le tableau :");
    scanf("%d",&x);
    trouve =0;
    for(i=0;i<n;i++)
    {
        if(T[i]==x)
        {
            trouve=1;
            break;
        }
    }
    if(trouve==0)
        printf("La valeur %d n'existe pas dans le tableau",x);
    else
        printf("la valeur %d existe dans le tableau",x);
    return 0;
}
