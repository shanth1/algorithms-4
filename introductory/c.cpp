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
using namespace std;

float getAngle(int a_x, int a_y, int b_x, int b_y) { return 0; }

int getPathLength(int a_x, int a_y, int b_x, int b_y) {
  if (a_x == b_y && a_y == b_y) {
    return 0;
  }

  return 0;
}

int main(int argc, char *argv[]) {
  int a_x, a_y, b_x, b_y;

  cin >> a_x >> a_y >> b_x >> b_y;

  cout << getPathLength(a_x, a_y, b_x, b_y);
  return 0;
}
