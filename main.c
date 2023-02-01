#include <stdio.h>
#include "io.h"

#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 64

//Defining our operation IDs
#define MIN     0
#define MAX     1
#define ODD     2
#define EVEN    3
#define MINMAX  4
#define ODDEVEN 5

// this function fills input buffer using values
// obtained with the function get_value()
void reading(int[], int[], int[]);

// this function performs processing of data in local buffer
// and put results back into local buffer
void processing(int[], int[], int[]);

// this function transfers data between two buffers
// it is used to transfer data from input buffer to local buffer
// and to transfer data from local buffer to output buffer
void transferring(int[], int[], int[], int[], int[]);

// this function submit the results stored
// in output buffer for validation
void submitting(int[], int[], int[]);

// this function prints the contents of each buffer
void print_buffer(int[], int[], int[]);

//Here is the start of our main code
int main(void) {

    //Here we are set up our buffers
    int inputBuffer[BUFFER_SIZE] = {0};
    int localBuffer[BUFFER_SIZE] = {0};
    int outputBuffer[BUFFER_SIZE]= {0};

    //And we go to the first function
    reading(inputBuffer, localBuffer, outputBuffer);

    //We check the first value to make sure it is not -1
    while (inputBuffer[0] != -1) {

        //Then we go through the process of transferring
        transferring(inputBuffer,localBuffer, inputBuffer, localBuffer, outputBuffer);
        processing(inputBuffer, localBuffer, outputBuffer);
        transferring(localBuffer, outputBuffer, inputBuffer, localBuffer, outputBuffer);
        submitting(inputBuffer, localBuffer, outputBuffer);

        //We make sure to clear the buffers after
        for(int j = 0; j < BUFFER_SIZE; j++) {
            inputBuffer[j] = 0;
            localBuffer[j] = 0;
            outputBuffer[j] = 0;
        }

        //And then begin the process again
        reading(inputBuffer, localBuffer, outputBuffer);
    }
    //End of main code
    return 0;
}


//The first function, where values are read to the input buffer
void reading(int inputBuffer[BUFFER_SIZE], int localBuffer[BUFFER_SIZE], int outputBuffer[BUFFER_SIZE]) {

    printf("Reading...\n");

    //The first two values are put into the input buffer
    inputBuffer[0] = get_value();
    inputBuffer[1] = get_value();

    //The rest of the values are copied in
    for(int i = 2; i < inputBuffer[1] + 2; i++) {

        inputBuffer[i] = get_value();
    }

    //Now we display the current contents of each buffer
    print_buffer(inputBuffer, localBuffer, outputBuffer);
}

//The third function, where the process is decided depending on the operation ID
void processing(int inputBuffer[], int localBuffer[], int outputBuffer[]) {

    printf("Processing...\n");

    int max, min, num_odd = 0, num_even = 0;

    //Here is where we read the operation ID
    switch(localBuffer[0]) {

        case MIN: //This loop finds the minimum value
            min = localBuffer[2];

            //It sorts through each value, replacing 'min' if the next value is smaller
            for(int n = 3; n < localBuffer[1] + 2; n++) {

                if(localBuffer[n] < min) {
                    min = localBuffer[n];
                }
            }
            //The output buffer will only have 1 result
            localBuffer[1] = 1;
            localBuffer[2] = min;
            break;

        case MAX: //This loop finds the maximum value
            max = localBuffer[2];

            //It sorts through each value, replacing 'max' if the next value is larger
            for(int n = 3; n < localBuffer[1]+ 2; n++) {

                if(localBuffer[n] > max) {
                    max = localBuffer[n];
                }
            }
            //The output buffer will only have 1 result
            localBuffer[1] = 1;
            localBuffer[2] = max;
            break;

        case ODD: //This loop finds the number of odd values

            //It modulo divides each number by 2, and increments the counter if the result is 1
            for(int n = 2; n < localBuffer[1] + 2; n++) {

                if((localBuffer[n] % 2) == 1) {

                    ++num_odd;
                }
            }
            //The output buffer will only have 1 result
            localBuffer[1] = 1;
            localBuffer[2] = num_odd;
            break;

        case EVEN: //This loop finds the number of even values

            //It modulo divides each number by 2, and increments the counter if the result is 0
            for(int n = 2; n < localBuffer[1] + 2; n++) {

                if((localBuffer[n] % 2) == 0) {

                    ++num_even;
                }
            }
            //The output buffer will only have 1 result
            localBuffer[1] = 1;
            localBuffer[2] = num_even;
            break;

        case MINMAX: //This loop finds both the min and max by combining the MIN and MAX conditions above

            min = localBuffer[2];

            for(int n = 3; n < localBuffer[1] + 2; n++) {

                if(localBuffer[n] < min) {
                    min = localBuffer[n];
                }
            }

            max = localBuffer[2];

            for(int n = 3; n < localBuffer[1]+ 2; n++) {

                if(localBuffer[n] > max) {
                    max = localBuffer[n];
                }
            }
            //The output buffer will have 2 results
            localBuffer[1] = 2;
            localBuffer[2] = min;
            localBuffer[3] = max;
            break;

        case ODDEVEN: //This loop finds the number of odd and even values by combining the ODD and EVEN conditions above

            for(int n = 2; n < localBuffer[1] + 2; n++) {

                if((localBuffer[n] % 2) == 1) {

                    ++num_odd;
                }
            }
            for(int n = 2; n < localBuffer[1] + 2; n++) {

                if((localBuffer[n] % 2) == 0) {

                    ++num_even;
                }
            }
            //The output buffer will have 2 results
            localBuffer[1] = 2;
            localBuffer[2] = num_odd;
            localBuffer[3] = num_even;
            break;
    }
    //And we print the current contents of each buffer
    print_buffer(inputBuffer, localBuffer, outputBuffer);
}

//The second and fourth function, where the contents of the source buffer are copied to the destination buffer
void transferring(int sourceBuffer[], int destinationBuffer[], int inputBuffer[], int localBuffer[], int outputBuffer[]) {

    printf("Transferring...\n");

    //A loop to copy the contents
    for(int i = 0; i < sourceBuffer[1] + 2; i++) {

        destinationBuffer[i] = sourceBuffer[i];
    }
    //And the current contents of each buffer is printed
    print_buffer(inputBuffer, localBuffer, outputBuffer);
}

//The final function, where he contents of the output buffer are submitted
void submitting(int inputBuffer[], int localBuffer[], int outputBuffer[]) {

    printf("Submitting...\n");

    //If the result of the submit_results function is 1, the results are incorrect. If 0, then incorrect
    if(submit_results(outputBuffer)) {

        printf("The results are not correct\n\n");
    }
    else {

        printf("The results are correct\n\n");
    }
    //And we print the final contents of each buffer
    print_buffer(inputBuffer, localBuffer, outputBuffer);
}

//Here is the function to print each buffer, it takes all three buffers as an input
void print_buffer(int inputBuffer[], int localBuffer[], int outputBuffer[]) {

    //This function employs loops to print each integer individually

    printf("The input buffer is:");
    for (int i = 0; i < inputBuffer[1] + 2; i++) {
        printf("%5d", inputBuffer[i]);
    }
    printf("\n");

    printf("The local buffer is:");
    for (int i = 0; i < localBuffer[1] + 2; i++) {
        printf("%5d", localBuffer[i]);
    }
    printf("\n");

    printf("The output buffer is:");
    for (int i = 0; i < outputBuffer[1] + 2; i++) {
        printf("%5d", outputBuffer[i]);
    }
    printf("\n\n");
}
