#include <stdio.h>

int main(int argc, char **argv) {

int farh, celsius;

int lower, upper, step, header;

lower = 0;
upper = 300;
step = 20;
header = 1;

celsius = lower;

while (celsius <= upper) {
    if (header == 1){
        printf("%s\t%s\n", "Fahrenheit", "Celsius");
        header = 0;
    }
    farh = (celsius / 5 * 9) + 32;
    printf("%3d\t\t%3d\n", celsius, farh);
    celsius = celsius + step;
}

}
