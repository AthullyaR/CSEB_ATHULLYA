#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *num=(int*)calloc(20,sizeof(int));
    int i;
    num[0]=1;
    num[1]=2;
    num[3]=3;

    printf("\nStored integers are\n");
    for(i=0;i<5;i++)
    printf("num[%d]=%d\n",i,num[i]);
    printf("\n%p",num);
    printf("\n%p",num+1);
    printf("\n%p",num+2);

}