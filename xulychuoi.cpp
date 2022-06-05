#include <stdio.h>
#include <conio.h>
#include <string.h>
// hàm menu
void menu()
{
    printf("1.Kiem tra doi xung");
    printf("\n2.Dao nguoc chuoi");
    printf("\n3.Tinh n lan cang bac 2");
}
// hàm kiểm tra đối xứng
int boolSymmetric(char a[])
{
    size_t len = strlen(a); // lay so ki tu cua a
    // for (int i = 0; i < '\0'; i++)
    for (int i = 0; i < len / 2; i++)
    {
        if (a[i] != a[len - i - 1])
        return 0;
    }
    return 1;
}
// hàm thực thi
void process()
{
    char s[100] = "123321";
    if (boolSymmetric(s) == 1)
    printf("Chuoi doi xung");
    else
    printf("chuoi ko doi xung");
}
int main()
{
    process();
    getch();
    return 0;
}