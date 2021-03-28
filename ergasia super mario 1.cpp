#include <stdio.h>
int main()
{
	int sx, pipe, i, x, y, z, c, j, n, N, M, stars, kena, b, k, p1;
    printf (" dose sxima 1 mexri 8:");
    scanf ("%d", &sx);
    if (sx==1)
    {
	printf("Give n:");
	scanf("%d", &n);
    while (n<6 || n>18)
	{
	printf("error");
	return 0;
    }
	stars=2;
	kena=n-1;
    for(x=1; x<=(n+n-1) ; x++)
    printf(" ");
    printf("   *\n");
    for(x=1; x<=(n+n-1) ; x++)
    printf(" ");
	printf(" ***\n");
	for(x=1; x<=(n+n-1) ; x++)
    printf(" ");
	printf("  **\n");
	for (i=1; i<=n-1; i++)
	{
		for(j=1; j<=kena; j++)
		printf(" ");
		for(j=1; j<=stars; j++)
		printf("*");
		for(x=1; x<=n; x++)
		printf(" ");
	    printf(" *");
		printf("\n");
		stars+=1;
		kena-=1;
	}
	for (x=1;x<=n+1;x++)
	printf("*");
	for (j=1;j<=n; j++)
	printf(" ");
	printf("***");
	return 0;
	}



        if (sx==2)
        {
	printf("dose n:");
	scanf("%d", &n);
	while(n<2 || n>11)
	{
	printf("error");
	return 0;
}
	for(i=1; i<=n+2; i++)
	{
	printf("* ");
}
printf("\n");
for(j=1; j<=n-1; j++)
{
for(x=1; x<=(n*2+3); x++)
	printf("*");
	printf("\n");
}
for(y=1; y<=2; y++)
{
	for(z=1; z<=n; z++)
	printf("*");
	for(b=0; b<=2; b++)
	printf(" ");
	for(k=1; k<=n; k++)
	printf("*");
	printf("\n");
}
	    }
            if (sx==3)
            {
	printf("Give n:");
	scanf("%d", &n);
	while(n<3 || n>10)
	{
		printf("error");
		return 0;
	}
	stars=2;
	kena=n-1;
	while(n<3 || n>10)
	{
		printf("The size is out of limit.");
		return 0;
	}
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=kena; j++)
		printf(" ");
		for (j=1; j<=stars; j++)
		printf("*");
		printf("\n");
		stars+=2;
		kena-=1;
	}
	for (x=1; x<2; x++)
	printf(" *");
	for (z=1; z<=(n+n-4); z++)
	printf(" ");
	printf("* ");
	return 0;
	        }
                if (sx==4)
                {
				
	printf("Give n:");
	scanf("%d", &n);
	while(n<3 || n>8)
	{
		printf("error");
		return 0;
	}
	while (n<=3 || n>=8)
	{
	printf("This price is not valid.");
	return 0;
    }
	for (i=1;i<=n+2; i++)
	printf("*");
	printf("\n");
	for (j=1; j<=n+2; j++)
	{
	printf("*");
    }
    printf("\n");
    printf(" ");
    for (j=1; j<=n; j++)
    printf("*");
    printf("\n");
    for (i=1; i<=n-2; i++)
    {
    	printf(" *");
    	for (j=0;j<n-2;j++)
    	printf(" ");
    	printf("*");
    	printf("\n");
	}
	printf(" ");
	for (j=0; j<n;j++)
	printf("*");
               }
                    if (sx==5)
                    {
                    	printf("5");
	                }
                        if (sx==6)
                        {
	printf("dose N:");
	scanf("%d", &N);
	printf("dose M:");
	scanf("%d", &M);
	while(N<3 || N>12 || M<6 || M>14)
	{
		printf("error");
		return 0;
	}
	for(i=1; i<=M; i++)
	{
	printf("*");
    }
    printf("\n");
    for(j=1; j<=M; j++)
    {
    printf("*");
    }
    printf("\n");
    for(x=1; x<=N; x++)
    {
    for(kena=1; kena<=(M/2)-1; kena++)
    printf(" ");
    for(y=2; y<=3; y++)
    printf("*");
    printf("\n");
    }
	                    }
                            if (sx==7)
                            {
	printf("dose n:");
	scanf("%d", &n);
	while(n<2 || n>7)
	{
		printf("error");
		return 0;
	}
	stars=i; kena=n-1;
	for(i=0; i<=n; i++)
	{
		for(j=0; j<stars; j++)
		printf("*  ");
		printf("\n");
		for(j=1; j<=kena; j++)
		printf("   ");
		stars+=2; kena--;
	}
	                        }
                                if (sx==8)
                                {
	printf("dose n:");
	scanf("%d", &n); 
	while(n<3 || n>8)
	{
	printf("error");
	return 0;
}
    for(i=1; i<=n; i++)
    {
    	printf("  ");
    	printf("**");
    }
    printf("\n");
		for(j=1; j<=n*2+(n+1)*2; j++)
	{
	
		printf("*");
	}
    	printf("\n");
    	 for(x=1; x<=n; x++)
		 {
    	 printf("  ");
         printf("**");
    
    }
    printf("\n");
	for(y=1; y<=n; y++)
		 {
    	 printf("  ");
         printf("**");
    
    }
	  printf("\n");
		for(z=1; z<=n*2+(n+1)*2; z++)
	{
	
		printf("*");
	}
		printf("\n");
    	 for(c=1; c<=n; c++)
		 {
    	 printf("  ");
         printf("**");
    
    }
	                            }
return 0;
}

	
