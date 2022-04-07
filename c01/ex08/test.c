#include<stdio.h>
#include<stdlib.h>

void	ft_sort_int_tab(int *v, int n);

int main()
{
    int tam,i,*v;
    scanf("%d",&tam);
    v=(int*)malloc(tam*sizeof(int));
    for(i=0;i<tam;i++)scanf("%d",&v[i]);
    ft_sort_int_tab(v,tam-1);
    for(i=0;i<tam;i++)printf("%d",v[i]);
    return 0;
}
