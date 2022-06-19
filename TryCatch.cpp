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
        if (c == 0) //neu c = 0 nhan loi 101
            throw 101;
        if (a = 0 && b == 0 && c != 0) // neu a va b = 0 c khac 0 nhan loi 102
            throw 102; 
        else //thuc hien phep tinh
            t = ((float)a - b) / c;
    }
    catch (int Error)
    {
        if (Error == 101) // tha loi 101 VD a = 5 b = 4 c = 0 (5-4)/0 loi vi khong so nao chia het cho 0 duoc
        {
            printf("Loi chia cho khong\n");
        }
        if (Error == 102)// tha loi 102 VD a = 0 , b = 0 , c = 7 0/7 = 0 0 chia moi so deu bang 0
        {
            printf("Ket qua : 0");
        }
    }
    printf("Ket qua : %.2f", t);// hien thi phep tinh , nho la kieu float de tra ket qua dung
    getch();
    return 0;
}
