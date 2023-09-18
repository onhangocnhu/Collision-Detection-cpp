#include <iostream>
#include <cmath>
#include "graphics.h"
#pragma comment(lib, "graphics.lib")

using namespace std;

/* void Collision_Detection_Circle_Rect(float Cx, float Cy, float R, float rectX, float rectY, float width, float height, float closestPoint_X, float closestPoint_Y) {
	if (Cx < rectX) closestPoint_X = rectX;
	else if (Cx > rectX + width) closestPoint_X = rectX + width;
	
	if (Cy < rectY) closestPoint_Y = rectY;
	else if (Cy > rectY + height) closestPoint_Y = rectY + height;
	
	float distX = abs(Cx - closestPoint_X), distY = abs(Cy - closestPoint_Y);
	float dist = sqrt(pow(distX, 2) + pow(distY, 2));
	
	if (dist <= R) cout << "Va cham";
	else cout << "Khong va cham";
}
*/

void Draw_Circle_Rect(int gd, int gm, float Cx, float Cy, float R, float rectX, float rectY, float width, float height) {
	gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	circle(Cx, Cy, R);
	
	line(rectX, rectY, rectX, rectY + height);
	line(rectX, rectY, rectX + width, rectY);
	line(rectX + width, rectY, rectX + width, rectY + height);
	line(rectX + width, rectY + height, rectX, rectY + height);
	
	getch();
	closegraph();
	
}

int main() {
	float Cx, Cy, R, rectX, rectY, width, height;
		
	cout << "Nhap toa do tam I (Cx; Cy) duong tron: \n"; cin >> Cx >> Cy;
	cout << "Nhap gia tri ban kinh duong tron: "; cin >> R;
	cout << "Nhap toa do xMin va yMin hinh chu nhat: \n"; cin >> rectX >> rectY;
	cout << "Nhap gia tri chieu dai va chieu rong hinh chu nhat: \n"; cin >> width >> height;
	
	float closestPoint_X = Cx, closestPoint_Y = Cy;

	if (Cx < rectX) closestPoint_X = rectX;
	else if (Cx > rectX + width) closestPoint_X = rectX + width;
	
	if (Cy < rectY) closestPoint_Y = rectY;
	else if (Cy > rectY + height) closestPoint_Y = rectY + height;
	
	/* cout << "pointX: " << closestPoint_X << endl;
	cout << "pointY: " << closestPoint_Y << endl; */
	
	float distX = abs(Cx - closestPoint_X), distY = abs(Cy - closestPoint_Y);
		
	float dist = sqrt(distX*distX + distY*distY);
	
	cout << "Khoang cach tu tam I den diem gan nhat tren hinh chu nhat: " << dist << endl;
	
	if (dist < R || dist == R) cout << "Va cham";
	else cout << "Khong va cham";
	
	//Collision_Detection_Circle_Rect(Cx, Cy, R, rectX, rectY, width, height, closestPoint_X, closestPoint_Y);
	
	int gd, gm;
	Draw_Circle_Rect(gd, gm, Cx, Cy, R, rectX, rectY, width, height);
	
	return 0;
}
