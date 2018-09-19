#include <stdio.h>
#include <stdbool.h>
//Tổng điểm thi lý thuyết là 10
//Tổng điểm thi thực hành là 25
//Tổng điểm trung bình môn = (% điểm thi lý thuyết + % điểm thi thực hành)/2.

float tinhDiemTrungBinhMonHoc(int diemLyThuyet, int diemThucHanh) {
    return ((float) diemLyThuyet / 10 * 100 + (float) diemThucHanh / 25 * 100) / 2 ;
}
//Điểm trung bình < 40%: not pass.
//Điểm trung bình 40% - 65%: trung bình.
//Điểm trung bình 65% - 75%: khá.
//Điểm trung bình > 75%: giỏi.

void inKetQuaHocTap(float diemTrungBinhMonHoc) {
    if (diemTrungBinhMonHoc <= 40) {
        printf ("Not Pass\n");
    } else if (diemTrungBinhMonHoc > 40 && diemTrungBinhMonHoc <= 65) {
        printf("Trung Binh\n");
    } else if (diemTrungBinhMonHoc > 65 && diemTrungBinhMonHoc <=75) {
        printf("Kha\n");
    } else {
        printf("Well Done\n");
    }
}
int main() {
//    printf("%f", tinhtongdiem()10, 25));
    int diemLyThuyet, diemThiThucHanh, diemBaiTapLon;
    char choice;
    while(true) {
        printf("Nhập Điểm Thi Lý Thuyết:\n");
        scanf("%d", &diemLyThuyet);
        printf("Nhập Điểm Thi Thực Hành:\n");
        scanf("%d", &diemThiThucHanh);
        printf("Nhập Điểm Thi Assingment:\n");
        scanf("%d", &diemBaiTapLon);

        int diemThucHanh = diemThiThucHanh + diemBaiTapLon;
        float diemTrungBinhMonHoc = tinhDiemTrungBinhMonHoc(diemLyThuyet, diemThucHanh);
        inKetQuaHocTap(diemTrungBinhMonHoc);
        printf("\nBan co muon tiep tuc khong ? (y/n)");
        scanf("%s", &choice);
        if(choice == 'n' || choice == 'N'){
            printf("Hen gap ban o mon sau");
            break;
        }
    }
    return 0;
}