#include <stdio.h>
int main(){
	int a[16],i,j,h,m,b;
	int count=0;
	for(i=0;a[i]!=-1;i++)
	{
		scanf("%d",&a[i]);
    }
	for(h=0;a[h]!=-1;h++)
	{
		for(j=h+1;a[j]!=-1;j++)
		{
			if(a[j]>a[h])
			{
				m=a[h];
				a[h]=a[j];
				a[j]=a[h];
			}
			b=a[h]/a[j];
			if(b==0)
			{
				count++;
			}
		printf("%d",count);
		}
	}
	return 0;
}
