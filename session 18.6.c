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

    int currentSize = 5;

    printf("\nNhap thong tin sinh vien can them:\n");
    struct Student newStudent;
    newStudent.id = currentSize + 1; // Tu dong tang ID

    printf("Nhap ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    getchar();

    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';

    students[currentSize] = newStudent;
    currentSize++;

    printf("\nThong tin cac sinh vien sau khi them moi:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
    }

    return 0;
}

