/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    
    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/

#include <stdio.h>

int main() {
    int N ;

    // รับจำนวนอาเรย์ที่ต้องการกรอก
    printf( "Input N : \n" ) ;
    scanf( "%d" , &N ) ;

    int Array[N] ;

    // รับข้อมูลลงในอาเรย์
    for ( int i = 0; i < N; i++ ) {
        printf( "Element[%d] : \n" , i ) ;
        scanf( "%d" , &Array[i] ) ;
    }

    // นับจำนวนชุดตัวเลขที่ซ้ำกัน
    for ( int i = 0 ; i < N ; i++ ) {
        int count = 1 ; // เริ่มนับจาก 1 เพราะตัวเองก็ถือว่าเป็นตัวเดียว
        if ( Array[i] != -1 ) {
            for ( int j = i + 1 ; j < N ; j++ ) {
                if ( Array[i] == Array[j] ) {
                    count++ ;
                    Array[j] = -1 ; // แสดงว่าตัวเลขนี้ถูกนับแล้ว
                }
            }
            printf( "%d -> %d value.\n" , Array[i] , count ) ; 
        }
    }

    return 0 ;
}
