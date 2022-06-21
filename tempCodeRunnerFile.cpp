#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("1.Tong xuat chu so nho nhat co hang tram va hang don vi chan");
    printf("\n2.Tong tam giac duoi trong ma tran vuong");
}

void taoM1CR(int a[] , int &n){
    srand(time(0));
    for(int i = 0 ; i<n ;i++)
    {
     a[i] = 100+rand()%(100-999+1);
    }
}

void xuatM1C(int a[] , int n)
{
    for(int i = 0 ; i<n ;i++)
    {
     printf("%5d",a[i]);
    }
}

int timSo(int a[] , int n)
{
    int vtSoMin = -1 , i;
    for (i = 0 ; i < n ; i++)
    {
        int b = (a[i]/100)%2;
        int c = ((a[i]%100)%10)/2;
        if(a[i] > 201 && a[i] < 999 && b == 0 && c == 0 ){
            vtSoMin == i;
            break;
        }
    }
    for (int j = i+1;j < n ;j++)
    {
        int b = (a[i]/100)%2;
        int c = ((a[i]%100)%10)/2;
        if( a[j] > 201 && a[j] < 999 && b==0 && c == 0 && a[j] > a[vtSoMin])
            vtSoMin == j;
            return j;
    }
}

void process()
{
    int a[100];
    int n;
    scanf("%d",&n);
    taoM1CR(a,n);
    xuatM1C(a,n);
    printf("\nSo nho nhat o vi tri %d",timSo(a,n));
}

int main()
{
    process();
    return 0;
}