#include <stdio.h>
#include <math.h>

int main()
{
    double lambda_green = 530e-9;
    double theta_green = 65.0;
    int m_green = 3;

    double lambda_red = 700e-9;
    int m_red = 2;

    double theta_green_rad = theta_green * M_PI / 180.0;

    double d = (m_green * lambda_green) / sin(theta_green_rad);

    double sin_theta_red = (m_red * lambda_red) / d;
    if (sin_theta_red > 1.0 || sin_theta_red < -1.0)
    {
        printf("No valid angle for the given parameters.\n");
    }
    else
    {
        // Calculate the angle in degrees
        double theta_red_rad = asin(sin_theta_red);
        double theta_red = theta_red_rad * 180.0 / M_PI;

        printf("The angle for the second-order bright spot for red light is: %.2f degrees\n", theta_red);
    }

    return 0;
}
