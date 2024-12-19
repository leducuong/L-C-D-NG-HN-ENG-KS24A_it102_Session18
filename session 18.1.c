#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;

    strcpy(student.name, "Nguyen Van A");
    student.age = 20;
    strcpy(student.phoneNumber, "0123456789");

    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %s\n", student.phoneNumber);

    return 0;
}

