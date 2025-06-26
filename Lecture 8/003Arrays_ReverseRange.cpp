<<<<<<< HEAD
#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int i;
	cout << "enter the value of i : ";
	cin >> i;

	int j;
	cout << "enter the value of j : ";
	cin >> j;

	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
=======
#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int i;
	cout << "enter the value of i : ";
	cin >> i;

	int j;
	cout << "enter the value of j : ";
	cin >> j;

	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
>>>>>>> 76cacd11b037b4467d3165ac58fd8e73fcd5325c
}