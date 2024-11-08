/*Ref no:CT101/G/22766/24
Name: Mucheke Davis Mwangi
*/
#include <stdio.h> 
int main(){
    // Declare and initialize the 2D array
    int scores[2][2] = {
        {6592, 3570},
        {8472, 5967}
    };

    // Use nested for loops to print the elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]); // Print each element
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
