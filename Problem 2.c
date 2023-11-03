#include <math.h>
#include <stdio.h>
#define PI 3.14159
double calculate_angle(double wavelength, int order, double line_spacing) {
  double theta_rad = asin(order * wavelength / line_spacing);
  double theta_deg = theta_rad * (180.0 / PI);
  return theta_deg;
}
int main() {
  double green_wavelength = 530e-9; // in meters
  double red_wavelength = 700e-9;   // in meters
  double green_angle_deg = 65.0;
  double line_spacing =
      3 * green_wavelength / sin(green_angle_deg * PI / 180.0);
  double second_order_angle = calculate_angle(red_wavelength, 2, line_spacing);
  printf(
      "The second-order bright spot for red light will be at %.2f degrees.\n",
      second_order_angle);
  return 0;
}