#include<stdio.h> 
int addTen(int x) //ฟังก์ชันเขียนโดยการ ชื่อฟังก์ชัน(ค่าตัวแปรที่รับ ตัวแปรที่รับ)
{ 
        x+=10; //เรียกใช้เพื่อบวก10เข้าไปในxแล้วreturnกลับไป
        return x; //ต้องreturnค่ากลับไปหมด ยกเว้นฟังก์ชันvoid
}
int addTwenty(); //ประกาศฟังชั่นโปรโทไทป์บนmain เพื่อไปเขียนฟังก์ชันนี้ข้างล่างmainได้
int x = 2000;
int main()
{
    int x = 90;
    int y = addTen(x);
    printf("addTen in main = %d\n" , y);
    printf("addTwenty in main = %d\n" , addTwenty());
}
//เขียนฟังก์ชันตรงนี้
int addTwenty(){
    //ถ้ามันหาxไม่เจอ จะไปหาตัวที่เรียกมันในcหรือหาในglobal
    x += 20;
    return x;
}
// เมื่อเริ่มรัน โปรแกรมจะโหลดข้อมูลglobalมาก่อน
// local ง่่ายกว่า global 
