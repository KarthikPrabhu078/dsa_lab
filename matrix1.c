#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,row,col;
    printf("Enter the number's of row: ");
    scanf("%d",&row);
    printf("Enter the number's of column: ");
    scanf("%d",&col);
    printf("Enter the elements of first matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition of two matrix are: \n");
     for(i=0;i<row;i++)
    {
        printf("\n")
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }
    return 0;
}
