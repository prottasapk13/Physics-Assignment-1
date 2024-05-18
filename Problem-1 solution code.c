#include <stdio.h>
#include <math.h>

int main() {
    int m;
    double theta, d;
    double wavelength;
    printf("Enter the order m: ");
    scanf("%d", &m);

    printf("Enter the angle theta (degrees): ");
    scanf("%lf", &theta);
    printf("Enter the distance between slits d (µm): ");
    scanf("%lf", &d);

    double theta_rad = theta * M_PI / 180.0;
    d *= 1e-6;
    wavelength = (d * sin(theta_rad)) / m;

    wavelength *= 1e9;
    printf("The wavelength is: %.2f nm\n", wavelength);

    if (wavelength >= 380 && wavelength < 450) printf( "The color of the light is  violet\n");
    if (wavelength >= 450 && wavelength < 485) printf( "The color of the light is  blue\n");
    if (wavelength >= 485 && wavelength < 500) printf("The color of the light is  cyan\n");
    if (wavelength >= 500 && wavelength < 565) printf("The color of the light is  green\n");
    if (wavelength >= 565 && wavelength < 590) printf( "The color of the light is   yellow\n");
    if (wavelength >= 590 && wavelength < 625) printf("The color of the light is  orange\n");
    if (wavelength >= 625 && wavelength <= 750) printf( "The color of the light is  red\n");
    else printf(" The color of the light is  unknown\n");

    return 0;
}

