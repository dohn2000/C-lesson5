#include <stdio.h>

int main(int argc, char **argv)
{
	//Bai1
   	int n,t;
   	printf("\nNhap so nguyen N = ");
   	scanf("%d",&n);
   	t=(n+1)*n/2;
   	printf("\nTong = %d", t);
    
    //Bai2
    int i;
    printf("\nTat ca uoc chung cua N = ");
    for (i=1;i<n;i++){
        if(n % i == 0){
            printf("%d ",i);
        }
    }
    //Bai3
    int num;
    printf("\nNhap num = ");
    scanf("%d",&num);
    for (i=1; i<=10; i++){
        printf("\n%d * %d = %d",i , num, i*num);
    }
    return 0;
}
