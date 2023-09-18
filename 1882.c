#include <stdio.h>

int main(int argc, char **argv)
{
	int i,o;
    for (o=i;o<3;){
    printf("\nMenu chuong trinh nhu sau");
    printf("\n1.Nhap thong tin sinh vien");
    printf("\n2.Hien thi thong tin sinh vien");
    printf("\n3.Ket thuc chuong trinh");
    printf("\nLua chon : ");
    scanf("%d",&i);
    if (i>3){printf("xin hay nhap lai");}
    char n[50],m[50],b[50],v[50],c[50],x[50];
    if (i == 1){
        printf("\nName ");
        scanf("%str",&n);
        printf("\ntuoi ");
        scanf("%str",&m);
        printf("\ndia chi ");
        scanf("%str",&b);
        printf("\nemail ");
        scanf("%str",&v);
        printf("\ngioi tinh ");
        scanf("%str",&c);
        printf("\nsdt ");
        scanf("%str",&x);
    }
    if (i == 2){
        printf("\nName %s",n);
        printf("\ntuoi %s",m);
        printf("\ndia tri %s",b);
        printf("\nemail %s",v);
        printf("\ngioi tinh %s",c);
        printf("\nsdt %s",x);
    }
    if (i==3){
        break;
    }
    }
    return 0;
	return 0;
}
