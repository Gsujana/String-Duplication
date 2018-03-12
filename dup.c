#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Dupl(char a[])
{int i,j,k;
   for(i=0;a[i]!='\0';i++)
    {
    	for(j=i+1;a[j]!='\0';j++)
    	{
    		while(a[i]==a[j])
    		{
				if(a[i]==a[j])
    			{
    				for(k=j;a[k]!='\0';k++)
    				{	
    					a[k]=a[k+1];
    				
    				}
				}	
			}
		}
	}
	printf("%s\n",a);
       
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int iter=1,t;
    char a[100];
    scanf("%d",&t);
	while(iter<=t)
	{
		scanf("%s",a);
		Dupl(a);
		iter++;	
	}
    return 0;
}
