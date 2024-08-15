#include <iostream>
using namespace std;

template<class T>
class Sum {
private:
    T *arr;
    int num;

public:
    Sum(T arr[], int n) : arr(arr), num(n) {}

    T sumfunc() {
        T sum = 0;
        for (int i = 0; i < num; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    int arr[3] = {1, 2, 3};
    Sum<int> s(arr, 3);
    cout << "Sum of Array (int): " << s.sumfunc() << endl;

    double arr1[3] = {1.1, 1.9, 2.0};
    Sum<double> s2(arr1, 3);
    cout << "Sum of Array (double): " << s2.sumfunc() << endl;

    return 0;
}
