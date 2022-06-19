#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    float t;
    printf("Nhap a b c\n");
    scanf("%d%d%d", &a, &b, &c);
    try
    {
        if (c == 0)
            throw 101;
        if (a = 0 && b == 0 && c != 0)
            throw 102;
        else
            t = ((float)a - b) / c;
    }
    catch (int Error)
    {
        if (Error == 101)
        {
            printf("Loi chia cho khong\n");
        }
        if (Error == 102)
        {
            printf("Ket qua : 0");
        }
    }
    printf("Ket qua : %.2f", t);
    getch();
    return 0;
}