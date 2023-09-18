#include <iostream>
#include "graphics.h"
#pragma comment(lib, "graphics.lib")

using namespace std;

int main() {
	float x_left1, y_left1, x_right1, y_right1, x_left2, y_left2, x_right2, y_right2;
	cin >> x_left1 >> y_left1 >> x_right1 >> y_right1 >> x_left2 >> y_left2 >> x_right2 >> y_right2;
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	//  setColor(0, 255, 0);  // green

// ve hinh chu nhat thu nhat

	line(x_left1, y_right1, x_left1, y_left1);
	line(x_left1, y_right1, x_right1, y_right1);
	line(x_right1, y_right1, x_right1, y_left1);
	line(x_right1, y_left1, x_left1, y_left1);

// ve hinh chu nhat thu hai

	line(x_left2, y_right2, x_left2, y_left2);
	line(x_left2, y_right2, x_right2, y_right2);
	line(x_right2, y_right2, x_right2, y_left2);
	line(x_right2, y_left2, x_left2, y_left2);

	if (x_left2 < x_right1 && x_left1 < x_right2 && y_left1 > y_right2 && y_left2 > y_right1) cout << "va cham";
		else cout << "khong va cham";

	getch();
	closegraph();
	
	
	return 0;

}
