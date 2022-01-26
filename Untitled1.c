#include <stdio.h>
#include<stdlib.h>
int main()
{   
    int str[100];
    int n,d,a,count=0;
    scanf("%d %d",&n,&d);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    *arr=n;
    for(a=0;a<n;a++)
    {
        scanf("%d", &str[a]);
    }
    int j;
    for(j=1;j<n-1;j++)
    {
        int i=j-1,k=j+1;
        while(i>=0 && k<n)
        {
            if(str[i]+str[k]==2*str[j])
            count++;
            else if(str[i]+str[k] < 2*str[j])
            i--;
            else
            i--;
            k++;
        }
    }
printf("%d",count);
	return 0;
}

