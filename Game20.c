#include<stdio.h>
#include<string.h>
int main()
{	int c=0,n,k,l,d,a[3],i,j;
	char s[10];
	printf("\n");
	while(1)
	{	printf("Player 1 : ");
		gets(s);	//maximum 3 integer inputs
		l=strlen(s);
		k=0;
		d=0;
		for(i=0;i<=l;i++)
		{	if(s[i]!=' ' && s[i]!='\0')
				d++;
			else
			{	a[k]=0;
				for(j=i-d;j<i;j++)
				a[k]=(a[k]*10)+s[j]-48;
				d=0;
				k++;
			}
		}
		c+=k;
		printf("\nProgram : ");
		k=c;
		for(i=1;i<=(4-(k%4));i++)
		{	c++;
			printf("%d ",c);
		}
		printf("\n\n");
		if(c==20)
		{	printf("YOU LOST\n\n");
			break;
		}
	}
	return 0;
}
