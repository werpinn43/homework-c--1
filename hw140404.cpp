#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = a;
}

void print(const int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }
}
  

int main()
{
    int a = 4, b = 5;
    swap(a, b);

    int numbers[10] = { 254, 234, 7142, 2344, 234, 1144, 256, 343, 4332, 3345 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    print(numbers, size);
}


