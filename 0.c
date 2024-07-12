#include <stdio.h>

int main() {
    char ma_so_sv[20];
    int tuoi;
    char khoa[50];

   
    printf("Nhap ma so sinh vien: ");
    scanf("%s", ma_so_sv);

    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    printf("Nhap khoa: ");
    scanf(" %[^\n]", khoa); 

    // In ra thông tin sinh viên
    printf("\nThong tin sinh vien:\n");
    printf("Ma so sinh vien: %s\n", ma_so_sv);
    printf("Tuoi: %d\n", tuoi);
    printf("Khoa: %s\n", khoa);

    return 0;
}

