/* #include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    int arr[n];
    printf("Size of arr ========= : %lu bytes\n", sizeof(arr));

    arr[0] = 10;
    // ใส่เลขเท่าไหร่ก็ได้แต่ต้องไม่เกิน 4 bytes 
    // เก็บค่าได้ตั้งแต่ -2,147,483,648 ถึง 2,147,483,647 (รวมทั้ง0)
    printf("arr[0] ============== : %d\n", arr[0]);
    printf("Size of arr ========= : %lu bytes\n", sizeof(arr));

    // ใส่เป็น Char ก็ได้ แม้ว่าประกาศเป็น array int
    arr[1] = 'a';
    printf("arr[1] ============== : %c\n", arr[1]);
    printf("Size of arr ========= : %lu bytes\n", sizeof(arr));

    //ใส่ String ไม่ได้เพราะประกาศเป็น array int
    //arr[2] = "abc";

    int *arrDynamic = (int*)malloc(n * sizeof(int));
    printf("Size of arrDynamic == : %lu bytes\n", sizeof(arrDynamic));

    return 0;
} */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;

    int *arrDynamic = (int*)malloc(n * sizeof(int));
    printf("Size of arrDynamic == : %lu bytes\n", sizeof(arrDynamic));

    arrDynamic[0] = 10;
    printf("arrDynamic[0] ================= : %d\n", arrDynamic[0]);
    printf("Size of arrDynamic ============ : %lu bytes\n", sizeof(arrDynamic));
    printf("Size of arrDynamic[0] ========= : %lu bytes\n", sizeof(arrDynamic[0]));

    arrDynamic[1] = 'a';
    printf("arrDynamic[1] ================= : %c\n", arrDynamic[1]);
    printf("Size of arrDynamic ============ : %lu bytes\n", sizeof(arrDynamic));
    printf("Size of arrDynamic[1] ========= : %lu bytes\n", sizeof(arrDynamic[1]));

    arrDynamic[2] = 2100000000;
    printf("arrDynamic[2] ================= : %d\n", arrDynamic[2]);
    printf("Size of arrDynamic ============ : %lu bytes\n", sizeof(arrDynamic));
    printf("Size of arrDynamic[2] ========= : %lu bytes\n", sizeof(arrDynamic[2]));

    free(arrDynamic);

    return 0;
}