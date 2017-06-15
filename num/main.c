
#include<stdio.h>
int main()
{
    int a[10];
    int i,j,t,temp;//temp记录临时中间值
    FILE *fr;
    FILE *fw;
    fw=fopen("//Users//a20161104601//Desktop//num//output","w+");
    fr=fopen("//Users//a20161104601//Desktop//num//input","r+");
    for (i=0;i<10;i++)
    {
        fscanf(fr,"%d",&a[i]);
    }
    for (j=1;j<=9;j++)
    {
        t=10-j;
        for (i=0;i<t;i++)
        {
            if (a[i]>a[i+1]) {
                
                // 交换两数的位置
                
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        
    }
    for (i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
        fprintf(fw,"%d ",a[i]);
    }
    printf("\n");
    fprintf(fw,"\n");
    return 0;
}


