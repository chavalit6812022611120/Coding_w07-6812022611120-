#include <stdio.h>

int main() {
    int level;

    // รับข้อมูลระดับสมาชิกจากผู้ใช้
    printf("กรุณาป้อนระดับสมาชิกของคุณ (1=Silver, 2=Gold, 3=Platinum, 4=Diamond): ");
    scanf("%d", &level);

    printf("สิทธิประโยชน์ของคุณคือ: ");

    // ใช้ if-else if-else ในการตรวจสอบเงื่อนไข
    if (level == 1) {
        printf("5%% discount\n");
    } 
    else if (level == 2) {
        printf("10%% discount + Reward points\n");
    } 
    else if (level == 3) {
        printf("15%% discount + Reward points + Birthday gift\n");
    } 
    else if (level == 4) {
        printf("ได้ทุกอย่าง + VIP events\n");
    } 
    else {
        // กรณีที่ผู้ใช้ป้อนเลขอื่นที่ไม่อยู่ในเงื่อนไข
        printf("ไม่พบระดับสมาชิกที่ระบุ\n");
    }

    return 0;
}