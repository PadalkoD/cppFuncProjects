#include <iostream>
using namespace std;
float avg(float a, float b, float c, float d) {
	return (a + b + c + d) / 4;
}
void showArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
}

int MinElement(int array[], int size) {
	int min = array[0];
	for (int i = 0; i < size; i++) {
		if (min > array[i]){
			min = array[i];

		}
			
		
	}
	return min;
}
int MaxElement(int array[], int size) {
	int max = array[0];
		for (int i = 0; i < size; i++) {
			if (max < array[i]){
				max = array[i];
			}


		}
	return max;
}

int MaxIndexElement(int array[], int size) {
	int max = array[0];
	int maxIndex = 0;
	for (int i = 0; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

int summElofArray(int array[], int size) {
	int summ = 0;
	for (int i = 0; i < size; i++) {
		summ += array[i];
	}
	return summ;
}

//float avgElofArray(int array[], int size) {
//	return (float)summElofArra(array, size) / size;
//}
int MinIndexElement(int array[], int size) {
	int min = array[0];
	int minIndex = 0;
	for (int i = 0; i < size; i++) {
		if (min < array[i]) {
			min = array[i];
			minIndex = i;
		}
	}
	return minIndex;
}

int Massiv(int array[], int size, int array2[], int size2) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = array[i];
	}
	for (int i = 0; i < size2; i++) {
		sum += array2[i];
	}
	return sum;
}


void perevernMassiv(int array[], int size) {
	for (int i = 0; i < size / 2; i++) {
		swap(array[i], array[size - 1 - i]);
	}
}


void dsaweMassiv(int array[],int array2[],int array3[],int size,int size2,int size3) {
	for (int i = 0; i < size; i++) {
		swap(array2[array[i]], array2[array3[i]]);
	}

}





int main()
{
	int array2[] = { 3,7,1,4,5,6 };
	int array[] = { 1,2,4 };
	int array3[] = { 3, 1, 2 };
	int size = sizeof(array) / sizeof(array[0]);
	int size2 = sizeof(array2) / sizeof(array2[0]);
	int size3 = sizeof(array3) / sizeof(array3[0]);
	//cout << Massiv(array, size, array2, size2);
	//perevernMassiv(array, size);
	showArray(array3, size3);
	dsaweMassiv(array, array2, array3, size, size2, size3);
	showArray(array3, size3);
}
