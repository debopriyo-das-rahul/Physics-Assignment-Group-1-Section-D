#include <math.h>
#include <stdio.h>
#define PI 3.14159
char *color(double lambda) {
  if (lambda >= 380e-9 && lambda <= 450e-9) {
    return "violet";
  } else if (lambda > 450e-9 && lambda <= 485e-9) {
    return "blue";
  } else if (lambda > 465e-9 && lambda <= 500e-9) {
    return "cyan";
  } else if (lambda > 500e-9 && lambda <= 565e-9) {
    return "green";
  } else if (lambda > 565e-9 && lambda <= 590e-9) {
    return "yellow";
  } else if (lambda > 590e-9 && lambda <= 625e-9) {
    return "orange";
  } else if (lambda > 625e-9 && lambda <= 750e-9) {
    return "red";
  } else {
    return "is not visible";
  }
}
int main() {
  int m;
  double theta, d;
  printf("value of m=");
  scanf("%d", &m);
  printf("Value theta (in degrees)=");
  scanf("%lf", &theta);
  printf("d (in micrometers)");
  scanf("%lf", &d);
  theta = theta * PI / 180.0;
  d = d * 1e-6;
  double lambda = d * sin(theta) / m;
  printf("The wavelength of light = %.9lf\n", lambda);
  printf("Color of the light: %s ", color(lambda));
  return 0;
}
