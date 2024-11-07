/*Ref no:CT101/G/22766/24
Name: Mucheke Davis Mwangi
*/
#include <stdio.h>

#include <stdio.h>

int main() {
    // Define a 2D array data structure named "scores"
    int scores[2][2] = { // Adjusted dimensions to match the number of initializers
        {65, 92}, {84, 72},
        {35, 59}, {70, 67}
    };

    // Print the elements of the "scores" array using a nested for loop
    for (int i = 0; i < 4; i++) { // Adjusted the outer loop to match the number of rows
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
