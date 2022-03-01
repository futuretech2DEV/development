#include <stdio.h>

int main(int argc, char **argv) {

int farh, celsius;

int lower, upper, step, header;

lower = 0;
upper = 300;
step = 20;
header = 1;

farh = lower;

while (farh <= upper) {
    if (header == 1){
    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    header = 0;
    }
    celsius = 5 * (farh - 32) /9;
    printf("%d\t\t%d\n", farh, celsius);
    farh = farh + step;
}

}
