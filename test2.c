#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,  i;
    scanf("%d", &num);
    // arr = (int*) malloc(num * sizeof(int));
    int arr[num];
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int num2[num];

    for(int j=0;j<num;j++){
        num2[j]=arr[num-1-j];
    }
        /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", num2[i]);
    return 0;
}
