#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>



using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
	//s ----> t searching area
	//a - apple tree location
	//b - orange tree location
	//apples and oranges - vector where fruits is fall down	
	
	int sumApple = count_if(apples.begin(), apples.end(), [s, t, a](int x) {
		if (x+a >= s && x+a <= t) {
			return true;
		}
		else {
			return false;
		}
		});

	int sumOrange = count_if(oranges.begin(), oranges.end(), [s, t, b](int x) {
		if (x + b >= s && x + b <= t) {
			return true;
		}
		else {
			return false;
		}
		});
	cout << sumApple<<endl;
	cout << sumOrange << endl;
}

int main()
{
	//expected 1 1
	countApplesAndOranges(7, 11, 5, 15, vector<int>{-2,2,1 }, vector<int>{5,-6});
	
}
