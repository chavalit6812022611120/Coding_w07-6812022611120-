#include <stdio.h>

// ฟังก์ชันสำหรับคำนวณส่วนลด
float calculate_discount(int age, int vip_level, float purchase_amount) {
    float discount_rate = 0.0;

    // เงื่อนไขที่ 1: อายุมากกว่า 60 ปี หรือ VIP ระดับ 3, 4
    if (age > 60 || (vip_level == 3 || vip_level == 4)) {
        discount_rate = 0.20;
    }
    // เงื่อนไขที่ 2: อายุ 30-40 ปี และยอดซื้อเกิน 2,000 บาท
    else if (age >= 30 && age <= 40 && purchase_amount > 2000) {
        discount_rate = 0.15;
    }
    // เงื่อนไขที่ 3: อายุ 18-25 ปี และยอดซื้อเกิน 1,000 บาท
    else if (age >= 18 && age <= 25 && purchase_amount > 1000) {
        discount_rate = 0.10;
    }
    // เงื่อนไขที่ 4: VIP ระดับ 5 หรือยอดซื้อเกิน 50,000 บาท
    else if (vip_level == 5 || purchase_amount > 50000) {
        discount_rate = 0.25;
    }

    return discount_rate;
}

int main() {
    int age, vip_level;
    float purchase_amount;
    float discount_rate, discount_amount, final_price;

    // รับข้อมูลจากผู้ใช้งาน
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip_level);

    printf("Enter purchase amount: ");
    scanf("%f", &purchase_amount);

    // คำนวณส่วนลด
    discount_rate = calculate_discount(age, vip_level, purchase_amount);
    
    // คำนวณยอดเงินที่ลดได้
    discount_amount = purchase_amount * discount_rate;
    
    // คำนวณราคาสุทธิ
    final_price = purchase_amount - discount_amount;

    // แสดงผลลัพธ์
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, purchase_amount);

    if (discount_rate > 0) {
        printf("Discount received: %.0f%%\n", discount_rate * 100);
        printf("Discount amount: %.2f THB\n", discount_amount);
        printf("Final price: %.2f THB\n", final_price);
    } else {
        printf("No discount applied\n");
    }

    printf("\nThank you for shopping with us!\n");

    return 0;
}