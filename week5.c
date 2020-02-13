#include<stdio.h>
#include<stdlib.h>
char name[20];
char number[5];
int main()
{
    // printf("Enter Name:");
    // gets(name); // รับchar[]เข้ามา ต้องประกาศขนาดตัวแปรมาก่อน
    // fgets(name,20,stdin); //fgetsเก็บค่าname เก็บได้20ตัว เก็บตัว \n และ \0 ด้วย เก็บเยอะๆไว้ก่อนอุ่นใจดี
    // printf("name = %s",name);
   
    fgets(number,5,stdin); 
    int i = atoi(number); //ถ้าแปลงไม่ได้จะเก็บ0 แปลงค่าอินพุทnumberให้เป็นค่าi //atoi=>i คือ int
    // printf("number = %s, i = %d\n",number,i); //arrayตัวสุดท้ายจะเป็น\0 // \0 ถือเป็นสตริง1ตัว
    // char a = getchar();	
    // getchar();           //getchar()คือการเก็บตัวอักษรตัวเดียว
    // char b = getchar();

    // long l= atol(number); //atol=>l คือ long
    // double d = atof(number); //a to float ใช้กับ double ไม่ได้
    // puts(number); // รับString อย่างเดียว ขึ้นบรรทัดใหม่ให้ด้วย
    // putchar(100);putchar('a');
    
    // if(0<=i && i <= 10){  // 0<i<10 ใช้ไม่ได้ // && || ช่วยคุณได้เสมอ
    //     printf("if = %d", 0<=i && i <= 10);
    // }
    // else if (i <= 50 || !found){ //!found = นิเสธfound
    //     printf("else if");
    // }
    // else{
    //     printf("else");
    // }

    // int count = 0;
    // while (count < i)
    // {
    //     printf("%d\n",count);
    //     count++;
    //     // ++countทำงานเร็วกว่าcount++ //การหยุดinfinite loop กด ctrl + c หยุดเอา
    // }
    for (int j = 0; j < i; j++)//ตัวแรกรันครั้งแรกครั้งเดียว  ตัวที่2จะถูกเรียกก่อนทำลูป เสร็จแล้วจะไปทำตัวที่3ต่อ
    {
        printf("%d\n",j);
    }
    // int array[10]; กำหนดให้arrayนี้เก็บได้10ตัว ตั้งแต่indexที่ 0-9  & ข้างในarrayเป็นint
 
    
    
    
}