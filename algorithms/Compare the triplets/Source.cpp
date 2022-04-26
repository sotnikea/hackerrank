#include <iostream>
#include <string>
#include <vector>
#include <numeric>


using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
	vector<int> res{ 0,0 };
	for (int i = 0; i < 3; i++) {
		if (a[i] > b[i]) res[0]++;
		else if (a[i] < b[i]) res[1]++;
	}
	return res;
}

int main()
{
	{
		vector<int> v1{ 5,6,7 };
		vector<int> v2{ 3,6,10 };
		vector<int> res = compareTriplets(v1, v2);
		if (res == vector<int>{1, 1}) {
			cout << "First test ok" << endl;
		}
	}
	
	{
		vector<int> v1{ 17,28,30 };
		vector<int> v2{ 99,16,8 };
		vector<int> res = compareTriplets(v1, v2);
		if (res == vector<int>{2, 1}) {
			cout << "Second test ok" << endl;
		}
	}
}
