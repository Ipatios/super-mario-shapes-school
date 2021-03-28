 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_array(char** array, int height, int width);

int main()
{
	int height, width, i, j;
	char **array;
	int sx, th, thesi, thesi6, arry, x, megethos, ipsos, thesi5, y, kena, ipsos2, m, thesi2, thesi4, megethos2, grammi, n, arithmos, stili, z, stars;
	
   printf("1-pipe\n2-toubla\n5-ebodia\n6-manitari\n4-kastro\n3-skala simaia\n7sinefo\ndialekse sxima:");
   while(sx<=1 && sx>=7)


	printf("\nInsert height: "); scanf("%d", &height);
	printf("\nInsert width: "); scanf("%d", &width);
	
	array = (char**)malloc(height*sizeof(char*));
	for(i=0; i<height; i++) array[i] = (char*)malloc(width*sizeof(char));
	
	for(i=0; i<height; i++)
		for(j=0; j<width; j++)	
			array[i][j] = ' ';
					
	if(sx==1)
printf("dose n:");
scanf("%d", &n);
while(n<3||n>8)
{
	printf("error");
	return 0;
}
printf("dose thesi:");
scanf("%d", &thesi);
grammi=height-1;
for(i=0; i<n; i++)  
{
	stili=thesi;
	for(j=0; j<n; j++)
	{
	    if(grammi==height-1 || grammi==height-n)
		array[grammi][stili]='*';
		stili++;
	}
	grammi--;
}
grammi=height-1;
for(i=0; i<n; i++)
{
	stili=thesi;
	for(j=0; j<n; j++)
	{
		if(stili=thesi)
		array[grammi][stili]='*';
		stili++;
		stili=stili+n-2;
		array[grammi][stili]='*';
		stili++;
		
	}
	grammi--; 
}
for(i=0; i<2; i++)
{
stili=thesi-1;
for(j=0; j<n+2; j++)
{
	array[grammi][stili]='*';
	stili++;
}
grammi--;
}








printf("dose n:");
scanf("%d", &n);
printf("dose thesi2:");
scanf("%d", &thesi2);
grammi=height-n;
for(i=0; i<1; i++)
{
	stili=thesi2;
	for(j=0; j<n; j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	grammi--;
}












printf("dose n:");
scanf("%d", &n);
while(n<2||n>7)
{
	printf("error");
	return 0;
}
printf("dose thesi5:");
scanf("%d", &thesi5);
stars=1;
grammi=height-n;
for(i=0; i<n; i++)
{
	stili=thesi5-1;
	for(j=0; j<stars; j++)
	{
		array[grammi][stili]='*';
		stili-=2;
	}
	stili=thesi5+1;
	for(j=0; j<stars; j++)
	{
		array[grammi][stili]='*';
		stili+=2;
	}
	grammi++;
	stars++;
 } 




printf("dose n:");
scanf("%d", &n);
while(n<5||n==6||n==8||n==10||n>11 )
{
	printf("error");
	return 0;
}
printf("dose thesi6:");
scanf("%d", &thesi6);
grammi=height-n;
for(i=0; i<2; i++)
{
	stili=thesi6;
	for(j=0; j<n+1; j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	grammi--;
}

 grammi=height-1;
 for(i<0; i<n+1; i++)
 {
 	stili=thesi6+n/2;
 	for(j=0; j<2; j++)
 	{
 		array[grammi][stili]='*';
 		stili++;
	 }
	 grammi--;
 }
 
 
 
 
 
 
 
 
 
 printf("dose n:");
 scanf("%d", &n);
 while(n<2||n>11)
 {
 	printf("error");
 	return 0;
 }
 printf("dose thesi4:");
 scanf("%d", &thesi4);
 grammi=height-1;
 for(i=0; i<n-1; i++)
 {
 	stili=thesi4;
 	for(j=0; j<n+n+3; j++)
 	{
 		array[grammi][stili]='*';
 		stili++;
	 }
	 grammi--;
 }
 grammi=height-1;
 for(i=0; i<2; i++)
 {
 	stili=thesi4+n;
 	for(j=0; j<3; j++)
 	{
 		array[grammi][stili]=' ';
 		stili++;
	 }
	 grammi--;
 }
 grammi=height-n;
 for(i=0; i<1; i++)
 {
 	stili=thesi4;
 	for(j=0; j<n+2; j++)
 	{
 		array[grammi][stili]='*';
 		stili+=2;
	 }
	 grammi--;
 }








	print_array(array, height, width);


	
	for(i=0; i<height; i++) free(array[i]);
	free(array);
	printf("\n\n");
	return 0;
}

void print_array(char** array, int height, int width)
{
	int i,j;

	printf("\n\n   ");
	for(i=0; i<width; i++)
		printf("%d", i%10);
	
	printf("\n  |"); for(j=0; j<width; j++) printf("-"); 
	printf("|\n ");
	for(i=0; i<height; i++)
	{
		
		printf("%d|",i%10);
		for(j=0; j<width; j++) printf("%c", array[i][j]);
		printf("|\n ");
	}
	printf(" |"); for(j=0; j<width; j++) printf("-"); 
	printf("|");
	printf("\n\n");
}
