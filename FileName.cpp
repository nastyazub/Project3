#include<iostream>
#include<tuple>
#include<utility>

using namespace std;

enum class Color {
	White,
	Red,
	Orange,
	Blue,
};

struct Point {
	double x = 0.0;
	double y = 0.0;
	Color color;
};

int main() {
	//1

	Point point1;
	point1.color = Color::Blue;
	cout << point1.x << " " << point1.y << " " << static_cast<int>(point1.color) << "\n";

	//2
	Point point2 = { 1.4, -2.2, Color::Red };
	cout << point2.x << " " << point2.y << " " << static_cast<int>(point2.color) << "\n";

	//создаём указатель и меняем значение через него

	Point* prt = &point1;

	prt->x += 1;
	prt->y += 1;

	cout << point1.x << " " << point1.y << " " << static_cast<int>(point1.color) << "\n";

	// кортежи

	tuple<int, Point, pair<int, int>> x = { 42, point1, {1, 2} };

	get<0>(x) = 44;
	get<1>(x).x = 12;
	get<1>(x).y = 13;
	get<1>(x).color = Color::Orange;
	get<2>(x).first = 4;
	get<2>(x).second = 5;

	cout << "1: " << get<0>(x) << " 2: " << get<1>(x).x << " " << get<1>(x).y << " " << static_cast<int>(get<1>(x).color) << " 3: " << get<2>(x).first << " " << get<2>(x).second;


}