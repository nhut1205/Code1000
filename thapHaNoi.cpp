#towerHaNoi
#include <stdio.h>
#include <conio.h>
void tower(int n , char a , char b, char c)
{
    if (n == 1)
    {
        printf("%c ---------- %c\n",a,c);//chuyen a sang c
                return;
    }
       tower(n-1 , a ,c ,b);//chuyen tu a sang b
       tower(1,a,b,c);//chuyen dia nhu 1 sang c
       tower(n-1,b,a,c);//chuyen tat ca tu b sang c
}
int main()
{
    char a='A', b='B', c='C';
    int n;
    printf("Nhap so thap: ");
    scanf("%d",&n);
    tower(n,a,b,c);
    getch();
}