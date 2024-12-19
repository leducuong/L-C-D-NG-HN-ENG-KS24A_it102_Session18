#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} SinhVien;

int main() {
    SinhVien sinhVien[MAX_SINHVIEN] = {
        {1, "Nguyen A", 20, "0123456789"},
        {2, "Tran B", 22, "0987654321"},
        {3, "Le C", 21, "0912345678"},
        {4, "Pham D", 23, "0901234567"},
        {5, "Hoang E", 20, "0988112233"}
    };
    int n = 5;  
    char tenSinhVien[100];
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Xoa sinh vien\n");
        printf("2. In danh sach sinh vien\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);
        getchar();  

        switch (luaChon) {
            case 1:
                printf("Nhap ten sinh vien can xoa: ");
                fgets(tenSinhVien, sizeof(tenSinhVien), stdin);
                tenSinhVien[strcspn(tenSinhVien, "\n")] = '\0';  

                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (strcmp(sinhVien[i].name, tenSinhVien) == 0) {
                        found = 1;
                    
                        for (int j = i; j < n - 1; j++) {
                            sinhVien[j] = sinhVien[j + 1];
                        }
                        n--; 
                        break;
                    }
                }

                if (!found) {
                    printf("Sinh vien %s khong ton tai!\n", tenSinhVien);
                }
                break;

            case 2:
                if (n == 0) {
                    printf("Khong co sinh vien nao trong danh sach.\n");
                } else {
                    printf("Danh sach sinh vien:\n");
                    for (int i = 0; i < n; i++) {
                        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", sinhVien[i].id, sinhVien[i].name, sinhVien[i].age, sinhVien[i].phoneNumber);
                    }
                }
                break;

            case 3:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (luaChon != 3);

    return 0;
}

