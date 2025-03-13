#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here

    int dice_rolls[100];                    // to store every roll
    int roll_sums[6] = {0, 0, 0, 0, 0, 0,}; // to store sum of rolls
    int sum = 0;                            // to store sum of values


    /* This loop will generate 100 "random" dice throws, store each of them in the array dice_rolls, 
    while also checking every single roll and adding a count to the equivalent index in roll_sums,
    and adding all the values in the sum variable. */

    for (int i = 0; i < 100; i++) {

        dice_rolls[i] = (rand() % 6) + 1;

        if (dice_rolls[i] == 1) {
            roll_sums[0]++;
        }
        else if (dice_rolls[i] == 2) {
            roll_sums[1]++;
        }
        else if (dice_rolls[i] == 3) {
            roll_sums[2]++;
        }
        else if (dice_rolls[i] == 4) {
            roll_sums[3]++;
        }
        else if (dice_rolls[i] == 5) {
            roll_sums[4]++;
        }
        else {
            roll_sums[5]++;
        }

        sum += dice_rolls[i];
    }

    float mean = sum / 100.0; // calculates and stores the mean of the sum of the 100 dice throws.

    // prints out the sums of dice rolls for each value in order, so number of 1s, number of 2s rolled etc.
    for (int i = 0; i < 6; i++) {
        printf("%d\n", roll_sums[i]);
    }

    // prints out the sum followed by the mean of value of all rolls.
    printf("%d\n%.1f", sum, mean);

    return 0;
}
