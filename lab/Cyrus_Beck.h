#pragma once
enum CLPointType {
	LEFT, RIGHT, BEYOND, BEHIND, BETWEEN, ORIGIN,
	DESTINATION
};
CLPointType Classify(Point& p1, Point& p2, Point& p);
vector <Point> CyrusBeckClipLine(Point& p1, Point& p2, vector <Point>& vertex);
void CuttingOff(Mat& image, Point& p1, Point& p2, vector <Point>& vertex, string color);