#include <stdio.h>

int main(int argc, char **argv) {

int farh, celsius;

int lower, upper, step;

lower = 0;
upper = 300;
step = 20;

celsius = lower;

while (celsius <= upper) {
    //celsius = 5 * (farh - 32) /9;
    farh = (celsius / 5 * 9) + 32;
    printf("%3d\t%3d\n", celsius, farh);
    celsius = celsius + step;
}

}
