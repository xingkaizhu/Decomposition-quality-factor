#include <stdio.h>
int main()
{
	int k,i,l,j,t,s;
	int a[100];int b[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<k;i++)
	{  j=0;
	   t=a[i];
	   for(l=2;l<=t;l++)
	   {
	   	      while((t%l)==0)
	   	      { b[j]=l;
	   	      	t=t/l;
	   	      	j++;
				 }
	   	   	
	   	   	
			  }     
	   	s=j;
		for(j=0;j<s-1;j++)      	
	   	printf("%d*",b[j]);
	   	printf("%d",b[s-1]);
		printf("\n");
		
	}
	
	
	
	
	
	
	return  0 ;
}

