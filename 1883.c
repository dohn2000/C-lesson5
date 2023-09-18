#include <stdio.h>

int main(int argc, char **argv)
{
	int max,f[100],i;
    printf("\nNhap max = ");
    scanf("%d",& max);
    f[1]=1;
    f[0]=1;
    printf("%d, %d",f[0],f[1]);
    for (i=2; i<100; i++){
        f[i]=f[i-2]+f[i-1];
        if(f[i]<max){
        printf(",%d ", f[i]);
}
        if(f[i]>max){
            break;
        }
    }
	return 0;
}
