#include<stdio.h>
int main(){
    
    int x = 100; //int เก็บค่า pointer เก็บ address
    int q = 0144; //0ข้างหน้าคือเลขฐาน8

    int w = 0x64; //0x ข้างหน้าคือฐาน16
    // printf("x = %d\n",x);
    // printf("reference of x = %lu\n", &x); //referenceในที่นี้คือaddressของx
    // printf("reference of x = %p\n", &x);  //%pคือเลขฐาน 16 

    //int number[] = {1, 2, 3, 4, 5, 6};
    // int number[100];
    // int number[100]= {1, 2, 3, 4, 5, 6}; //ถึงประกาศไว้6ตัว ก็เข้าถึงindexที่1000ได้ และเปลี่ยนค่าได้เสมอ
    //number[100000] = 200;
    // printf("index 1 = %d\n", number[100000] );
    // printf("reference of &number[1] = %p\n", &number[1000]); 
    // printf("reference of &number[0] = %p\n", &number[0]);
    // printf("reference of number = %p\n", number+1);  
    
    // int number[] = {1, 2, 3, 4, 5, 6};
    // int *ptr = &x;
    // int *arrPtr;
    // arrPtr = number; //ใส่addressให้arrPtr เขียนครั้งที่2ต้องไม่มีstar //arrPtr ชี้addressของnumber
    // arrPtr += 3; // ขยับindexขึ้นไป3
    // *arrPtr += 3; // ค่าaddressของตัวที่ถูกชี้นั้น +3
    // printf("arrPtr = %p, *arrPtr = %d \n",arrPtr,*arrPtr); 

    // int number[] = {1, 2, 3, 4, 5, 6};
    // for(int *ptr = number ; ptr <= &number[5]; ptr++){
    //     printf("[%p] = %d\n", ptr , *ptr);

    // }
    // int *ptr2 = number;
    // for(int i = 0; i < 6; i++){
    //     printf("[%p] = %d\n",ptr2 + i,*(ptr2 + i));
    // }
    // char input[100];
    // int count = 0;
    // char c;
    // while ( (c = getchar()) != '\n')
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // //char *ptr = input;
    // for(char *ptr = input; *ptr != '\0';ptr++){
    //     printf("%c\n" , *ptr);

    // }

    char s[100];
    int i;
    char c;
    scanf("%d=%c=%s" , &i,&c,s);
    printf("%d--%c--%s" , i,c,s);

}