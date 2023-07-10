#include<iostream>
#include<malloc.h>
#include<string.h>
typedef struct maytinh
{
	char mamay[20];
	char tenmay[20];
	int namsx;
	char hangsx[20];
	float gianhap;
	
}mt;
//c1
void nhap(maytinh *m)
{
	
	printf("Nhap ma may: ");
	fflush(stdin);
	gets(m->mamay);
	
	printf("Nhap ten may: ");
	fflush(stdin);
	gets(m->tenmay);
	
	printf("Nhap nam san xuat: ");
	scanf("%d", &m->namsx);
	
	printf("Nhap hang san xuat: ");
	fflush(stdin);
	gets(m->hangsx);
	
	printf("Nhap gia nhap : ");
	scanf("%f",&m->gianhap);
	
}
void nhapds( maytinh *a , int n )
{
	for( int i =0 ; i< n ; i++ )
	{
		printf("May thu %d :\n",i+1);
		nhap( (a+i) );
	}
}
//c2
void hienthi(maytinh *a, int n ) 
{
	
	printf("%-10s | %-14s | %-10s | %-14s | %-10s\n","ma may","ten may","nam sx","hang sx","gia nhap");
	for( int i = 0 ; i < n ; i++ )
	{
		printf("%-10s | %-14s | %-10d | %-14s | %.2f\n",(a+i)->mamay,(a+i)->tenmay,(a+i)->namsx,(a+i)->hangsx,(a+i)->gianhap);
	}
}
//c3
void hangsamsung(maytinh *a,int n)
{	
	
	char *p = "SAMSUNG";
	int kt=0;
	printf("May tinh cua nha san xuat hang SAMSUNG :\n");
	for(int i=0;i<n;i++)
	{
		if(strstr(strupr(a[i].hangsx),p) !=0)
		{
			printf("%-10s | %-14s | %-10d | %-14s | %.2f\n",(a+i)->mamay,(a+i)->tenmay,(a+i)->namsx,(a+i)->hangsx,(a+i)->gianhap);
			kt++;
		}
		
	}
	if(kt==0)
	{
		printf("Khong co hang SAMSUNG !");
	}
}
//C4 
void namsx2019(maytinh *a,int n)
{
	printf("May tinh san xuat nam 2019 la :\n ");
	for(int i=0;i<n;i++)
	{
		if(a[i].namsx==2019)
		{
		printf("%-10s | %-14s | %-10d | %-14s | %.2f\n",(a+i)->mamay,(a+i)->tenmay,(a+i)->namsx,(a+i)->hangsx,(a+i)->gianhap);
				
		} 
	}
}
int main()
{
	int n;
	printf("Nhap so luong may : ");
	scanf("%d",&n);
	maytinh *a;
	a = (maytinh *)malloc( n * sizeof(maytinh));
	nhapds( a , n );
	hienthi(a,n);
	hangsamsung(a,n);
	namsx2019(a,n);
	
}


