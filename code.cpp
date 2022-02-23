// Solution of 1011 - Sphere in beecrowd
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  double R, pi = 3.14159, VOLUME;
  cin >> R;
  VOLUME = (4 / 3.0) * pi * R * R * R;
  cout << "VOLUME = " << fixed << setprecision (3) << VOLUME << endl;
    system("pause");
    return 0;
}
