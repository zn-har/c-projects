#include <stdio.h>

float convert_temp(float value, int in, int out) {
    // Convert input temperature to Celsius
    if (in == 2) {
        value = (value - 32) / 1.8;
    } else if (in == 3) {
        value -= 273.15;
    }

    // Convert Celsius to output temperature
    if (out == 2) {
        return (value * 1.8) + 32;
    } else if (out == 3) {
        return value + 273.15;
    }
    
    // If output is Celsius, return the value as is
    return value;
}

int main() {
    float input, output;
    int in, out;

    printf("Enter the temperature: ");
    scanf("%f", &input);
    printf("Select your input temperature unit:\n1) Degree Celsius\n2) Fahrenheit\n3) Kelvin\n>>>>>>> ");
    scanf("%d", &in);
    printf("Select your output temperature unit:\n1) Degree Celsius\n2) Fahrenheit\n3) Kelvin\n>>>>>>> ");
    scanf("%d", &out);

    if (in < 1 || in > 3 || out < 1 || out > 3) {
        printf("Invalid input.\n");
        return 1;
    }

    output = convert_temp(input, in, out);
    printf("Temperature is: %.3f\n", output);
    return 0;
}
