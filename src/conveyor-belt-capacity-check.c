#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main(int argc, char *argv[]) {
    int motorCount, totalPackageWeight, TOTAL_MOTOR_CAPACITY;

    sscanf(argv[1], "%d", &motorCount);
    sscanf(argv[2], "%d", &totalPackageWeight);

    printf("How many motors are carrying the packages?\n");
    
    printf("%d\n", motorCount);
    
    printf("How many kg of packages do we expect?\n");
    
    printf("%d\n", totalPackageWeight);
    
    TOTAL_MOTOR_CAPACITY = motorCount * MOTOR_CAPACITY;

    if (totalPackageWeight <= TOTAL_MOTOR_CAPACITY) {
        printf("Yes! The conveyor belt can carry the packages.");
    } else {   
        printf("No! The conveyor belt cannot carry the packages.");
    }

}
