#include <stdio.h>

int main(void) {
    /* กำหนดตัวแปรเป็น double เพื่อรองรับทศนิยม */
    double score;         // คะแนนที่ผู้ใช้กรอก
    double bonus = 0.0;   // คะแนนพิเศษ 5% (ถ้าเข้าเงื่อนไข)
    double finalScore;    // คะแนนรวมหลังเพิ่ม

    /* 1) รับค่าคะแนนจากผู้ใช้ */
    printf("Enter midterm score: ");
    if (scanf("%lf", &score) != 1) {             // ป้องกันกรณีกรอกไม่ใช่ตัวเลข
        printf("Invalid input\n");
        printf("End of evaluation\n");
        return 0;
    }

    /* (ทางเลือก) เตือนช่วงคะแนนที่คาดหวัง — ไม่บังคับ แต่ช่วยตรวจสอบ */
    if (score < 0.0 || score > 100.0) {
        printf("Warning: score is usually in range 0-100\n");
    }

    /* 2) ตรวจเงื่อนไข ถ้าคะแนน >= 50 ให้เพิ่มโบนัส 5% */
    if (score >= 50.0) {
        bonus = score * 0.05;   // 5% ของคะแนนที่กรอก
    } else {
        bonus = 0.0;            // ไม่ได้โบนัส
    }

    /* 3) คำนวณคะแนนรวมสุดท้าย */
    finalScore = score + bonus;

    /* 4) แสดงผลลัพธ์: คะแนนรวมหลังเพิ่ม และข้อความปิดท้ายตามโจทย์ */
    printf("Final score after bonus: %.2f\n", finalScore);
    printf("End of evaluation\n");

    return 0;
}