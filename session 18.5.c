#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0345678912"},
        {4, "Pham Thi D", 23, "0765432198"},
        {5, "Hoang Van E", 24, "0912345678"}
    };

    int idToEdit;
    printf("\nNhap ID sinh vien can sua thong tin: ");
    scanf("%d", &idToEdit);
    getchar(); // Loai bo ky tu xuong dong con lai trong bo dem

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (students[i].id == idToEdit) {
            found = 1;
            printf("\nSinh vien duoc tim thay. Nhap thong tin moi:\n");

            printf("Nhap ten moi: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';

            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            getchar();

            break;
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien voi ID %d.\n", idToEdit);
    }

    printf("\nThong tin cac sinh vien sau khi sua:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
    }

    return 0;
}


