
#include "stdafx.h"


using namespace cv;
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	Mat picture = imread("Spock.jpg");

	imshow("",picture);

	waitKey(0);


	return 0;
}