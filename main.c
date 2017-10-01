
#include <stdio.h>
char name[50];
char date[50];
char phone[50];
void Menu() {
    printf("-----Menu-----\n");
    printf("1. Them sinh vien\n");
    printf("2. Thong tin sinh vien\n");
    printf("3. Thoat\n");
    printf("Nhap lua chon cua ban:\n");
}
int n;

void AddStudent() {
    printf("Nhap ten sinh vien:\n");
    fgets(name, sizeof(name),stdin);
    printf("Nhap ngay sinh:\n");
    fgets(date, sizeof(date),stdin);
    printf("Nhap so dien thoai:\n");
    fgets(phone, sizeof(phone),stdin);
    FILE *wf = fopen ("Student.txt","a");
    fputs(name,wf); fprintf(wf, "\n");
    fputs(date,wf); fprintf(wf, "\n");
    fputs(phone,wf); fprintf(wf, "\n");
    fclose(wf);
}
void ShowProfile() {
    char buff[100];
    FILE *pf;
    pf = fopen("student.txt", "r");
    printf("Tat ca cac thong tin ve sinh vien:\n");
    while (fgets(buff, sizeof(buff), pf)) {
        printf("%s", buff);
    }
    fclose(pf);
}
void main() {
    int choice;
    Menu();
    scanf("%d", &choice);
    getchar();
    while (choice != 3) {
        switch (choice) {
            case 1:
                AddStudent();
                break;
            case 2:
                printf("%s\n", name);
                printf("%s\n", date);
                printf("%s\n", phone);
                //ShowProfile();
                break;
            default:
                printf("Day khong phai lua chon phu hop, vui long nhap lai:\n");
        }
        Menu();
    }
}