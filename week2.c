#include<stdio.h>
#define bb 100 //กำหนดค่าตัวแปรขึ้นมาใหม่ #define ชื่อตัวแปร ค่าของตัวแปร
#define for "sdasad"  //define ให้forมีค่าเป็นsdasad ฟังก์ชันforใช้เหมือนเดิมไม่ได้แล้ว
float e;
int main(){
    int  a = 400; //longเก็บค่าเหมือนint แต่ได้ขนาดที่มากกว่า
    char b = 'a';
    char c = 97;
    float f = 0.1245;
    double d = 20.18888;
    char r[0];
    char s = '\0'; //กำหนดค่าcharacterให้เป็นว่าง ''
    
    // printf("hello_world");
    // printf("%u", a);
    // printf("%c %d %c %d", b,b,c,c);
    // printf("%f %lf", f, d);
    //printf("%f",e + 1000);
    
    int ans1 = a*b;
    float ans2 = f/b; //หารให้มีเศษต้องใช้ตัวแปรfloatมาเป็นตัวหารหรือตัวถูกหาร
    printf("%d", 2%1);
    
    //printf("%-10s", for);
    return 0; //บรรททัดนี้ใส่ไม่ใส่ก็ได้
}