#include <iostream>

using namespace std;

int binary_search(double key, double arr[], int &arr_length) {

	int l = 0;
	int r = arr_length - 1;
	int mid;
	bool flag = false;

	while ((l <= r) && (flag == false)) {

		mid = (r + l) / 2;


		if (arr[mid] == key) {
			flag = true;
		};
		if (arr[mid] > key) {
			r = mid - 1;
		}

		else {
			l = mid + 1;
		};

	}


	if (flag == true) {

		return mid;
	}
	else {

		return -1;
	};

}

int main() {

	double arr[] = {1,2,4,5,6};
	double key = 2;
	int arr_length = end(arr) - begin(arr);

	int a = binary_search(key,arr, arr_length);
	cout << a << endl;
	return 0;
}