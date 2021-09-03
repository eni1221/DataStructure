#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

class point {
public:
	int x;
	int y;

	point(int xi, int yi) {
		x = xi;
		y = yi;
	}
};

bool compare(point& a, point& b) {
	if (a.x < b.x) {
		return true;
	}
	else if (a.x == b.x) {
		if (a.y < b.y) {
			return true;
		}
		else return false;
	}
	else return false;
}

int main() {

	int n;
	cin >> n;
	int x, y = 0;
	vector<point>v;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(point(x, y));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++){
		cout << v[i].x << " " << v[i].y << "\n";
}



	return 0;
}