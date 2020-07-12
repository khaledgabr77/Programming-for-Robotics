#include<stdio.h>




// not great
int i;
int j;
int temp;
for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
        temp = i + j;
        printf("%d\n", temp);
    }
}


/*// much better
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        int temp = i + j;
        printf("%d\n", temp);
    }
}
*/
