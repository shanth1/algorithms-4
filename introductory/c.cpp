/*
  Мэрия Москвы основательно подготовилась к празднованию
  тысячелетия города в 2147 году,
  построив под столицей бесконечную асфальтированную площадку,
  чтобы заменить все существующие в городе автомобильные дороги
  В память о кольцевых и радиальных дорогах разрешили двигаться
  по площадке только двумя способами:

  1. В сторону точки начала координат или от неё.
  При этом из точки начала координат разрешено двигаться в любом направлении.

  2. Вдоль окружности с центром в начале координат и радиусом,
  который равен текущему расстоянию до начала координат.
  Двигаться вдоль такой окружности разрешается в любом направлении
  (по или против часовой стрелки).

  Вам, как ведущему программисту ответственной инстанции поручено разработать
  модуль, который будет определять кратчайший путь из точки A, с координатами
  (xA, yA) в точку B с координатами (xB, yB).

  Считайте, что менять направление движения можно произвольное количество раз,
  но оно должно всегда соответствовать одному из двух описанных выше вариантов.
*/

#include "algorithm"
#include "iostream"
#include "vector"
#include <cmath>
#include <iomanip>
using namespace std;

long double getAngle(int x1, int y1, int x2, int y2) {
  return abs(atan2(y1, x1) - atan2(y2, x2));
}

long double getPathLength(long long a_x, long long a_y, long long b_x,
                          long long b_y) {
  long double r1 = sqrt((long double)a_x * a_x + a_y * a_y);
  long double r2 = sqrt((long double)b_x * b_x + b_y * b_y);

  if (a_x == b_x && a_y == b_y) {
    return 0;
  }
  long double angle = getAngle(a_x, a_y, b_x, b_y);
  if (angle == M_PI) {
    return r1 + r2;
  }
  if (angle == 0) {
    return abs(r2 - r1);
  }
  long double len1 = r1 + r2;
  long double len2;

  if (r1 < r2) {
    len2 = r1 * angle + (r2 - r1);
  } else {
    len2 = r2 * angle + (r1 - r2);
  }

  if (len1 < len2) {
    return len1;
  }
  return len2;
}

int main(int argc, char *argv[]) {
  int a_x, a_y, b_x, b_y;

  cin >> a_x >> a_y >> b_x >> b_y;

  cout << setprecision(13) << getPathLength(a_x, a_y, b_x, b_y);
  return 0;
}
