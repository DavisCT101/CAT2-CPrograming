/*Ref no:CT101/G/22766/24
Name: Mucheke Davis Mwangi
*/
#include <stdio.h> 
int main(){
    // Declare and initialize the 2D array
    int scores[4][2] = {
        {65,92},{84,72},
        {35,70},{59,67}
    };

    // Use nested for loops to print the elements
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("scores [%d][%d]=%d\n",i,j,scores[i][j]); 
        }
    }

    return 0;
}
