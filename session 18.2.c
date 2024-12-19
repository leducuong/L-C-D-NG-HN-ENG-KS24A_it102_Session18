#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;

    printf("Nhap thong tin sinh vien:\n");
    printf("Nhap ten: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &student.age);
    getchar();

    printf("Nhap so dien thoai: ");
    fgets(student.phoneNumber, sizeof(student.phoneNumber), stdin);
    student.phoneNumber[strcspn(student.phoneNumber, "\n")] = '\0';

    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %s\n", student.phoneNumber);

    return 0;
}


