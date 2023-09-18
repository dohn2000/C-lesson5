#include <stdio.h>

int main(int argc, char **argv)
{
    int h,j,i;
	printf("\nNhap chieu cao h = ");
	scanf("%d",&h);
	for (i=0; i<h; i++)
	{printf(" ");
	}
	printf("*");
	for (i=0; i<h; i++)
	{ 
	
		for(j=i-1; j<h-1; j++)
		{
			printf(" ");
		}
		for(j=h-i; j<h;j++)
		{	
			if(j == h-i){
			printf("* ");
			}
			if (j == h-1){
			printf("*");
			}
			else {printf("  ");
			}
		}
		printf("\n");
		}
	for (i=0; i<=h; i++){
		printf("* ");
	}
	
	for (i=0; i<=h;i++){
		printf("\n");
		for (j=h-i; j<h; j++)
		{
			printf("* ");
		}
	}
	printf("\n");
	printf("\n*");
	for (i=0; i<h; i++)
	{ 
		
		for(j=h-i; j<h;j++)
		{	
			if(j == h-i){
			printf("* ");
			}
			if (j == h-1){
			printf("*");
			}
			else {printf("  ");
			}
		}
		printf("\n");
	}
	
	for (i= 0;i<=h;i++)
	{
		printf("* ");
	}
    
	int m,n,i;
    printf("\nNhap m = ");
    scanf("%d",&m);
    printf("\nNhap n = ");
    scanf("%d",&n);
    for (i=0;i<m;i++){
        printf("\n");
        for (j=0;j<n;j++){
            printf("*");
        }
    }
      printf("\n");
    for (j=0;j<n;j++){
    printf("* ");}
    for (i=1;i<m-1;i++){ 
        printf("\n");
        for (j=0;j<=n;j++){
            if(j == 0){
            printf("* ");}
            if(j == n){
            printf("* ");}
            else{printf(" ");}
        } 
    }
    printf("\n");
    for (j=0;j<n;j++){
    printf("* ");}
    
    int u, y, o; 
   	for (u = 0; u <= 200; ++u) 
   	for (y = 0; y <= 100; ++y) 
   	for (o = 0; o <= 40; ++o) 
   	if (u * 1000 + y * 2000 + o * 5000 == 200000) 
   	printf("\n%d to 1000(VND) - %d to 2000(VND) - %d to 5000(VND) ", u, y, o); 
	return 0;
}
