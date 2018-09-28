#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
int masinhvien;
char tensinhvien[50];
int sodienthoaisinhvien;
}sinhvien;
int main() {
    char choice;
    int size =10;
    sinhvien danhsachsinhvien[size];
    printf("Menu cho phép người dùng lựa chọn:\n");
    printf("1: Thêm mới sinh viên.\n");
    printf("2: Hiển thị danh sách sinh viên.\n");
    printf("3: Lưu danh sách sinh viên ra file.\n");
    printf("4: Đọc danh sách sinh viên từ file.\n");
    printf("5: Thoát chương trình.\n");
    printf("Vui lòng nhập lựa chọn của bạn từ 1 đến 5:\n");
    scanf("%s", &choice);
    //;
    switch (choice){
        case 1:
        sinhvien danhsachsinhvien[size]
            //printf("vui long nhap so sinh vien:\n");
            //scanf("%d", &size);
           // sinhvien danhsachsinhvien[size];
            //printf("vui long nhap so sinh vien:%d\n", size);
            //for (int i = 0; i < size; i++) {
              //  printf("%-10s%-20s%-10s%-20s%-10s%-20s", "", "Mã sinh viên", "|", "Tên sinh viên", "|", "Điện thoại");
           // }

            break;
        case 2:
            printf("hiển thị danh sách:\n");
            FILE *fp = fopen("danhsachsinhvien.txt", "w+");
            fclose(fp);
            break;
        case 3:
            printf("luu danh sach sinh vien");
            break;
        case 4:
            printf("doc danh sach sinh vien");
            break;
        case 5:
            printf("thoat danh sach sinh vien");
            break;
    }

    //int size =10;
   // printf("vui long nhap so sinh vien:\n");
   // scanf("%d", &size);
//sinhvien danhsachsinhvien[size];
   // for(int i=0; i<size; i++) {
     //   printf("%-10s%-20s%-10s%-20s%-10s%-20s", "",  "Mã sinh viên", "|", "Tên sinh viên", "|", "Điện thoại");
        //printf("mã của sinh vien thu %d là: \n", i + 1, danhsachsinhvien[i].masinhvien);
       // scanf("%-10s", &danhsachsinhvien[i].masinhvien);
       // printf("tên cua sinh vien thu %d là: \n", i + 1, danhsachsinhvien[i].tensinhvien);
       // fgetc(stdin);
       // fgets(danhsachsinhvien[i].tensinhvien, 50, stdin);
        //printf("so dien thoai cua sinh vien thu %d là: \n",i + 1, danhsachsinhvien[i].sodienthoaisinhvien);
       // scanf("%d", &danhsachsinhvien[i].sodienthoaisinhvien);
    }
    //for(int j=0;j<size;j++) {
       // printf("%-10s%-20s%-10s%-20s%-10s%-20s", "",  "Mã sinh viên", "|", "Tên sinh viên", "|", "Điện thoại");
       // printf("mã của sinh vien thu%d là: %d\n", j + 1, danhsachsinhvien[j].masinhvien);
       // printf("tên cua sinh vien thu  %d là: %s\n", j + 1, danhsachsinhvien[j].tensinhvien);
        //printf("so dien thoai cua sinh vien thu  %d là:%d\n", j + 1, danhsachsinhvien[j].sodienthoaisinhvien);
    //}
   // return 0;
//}