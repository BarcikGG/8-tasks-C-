#include <iostream>
using namespace std;

int factorial(int n) 
{
    if (n <= 1) return 1;
    else return (n* factorial(n - 1));
}

void swap_ints(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int array_sum(int N)
{
    int* arr = new int[N];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cout << "Input number: " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    return sum;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void middleNum(int N) 
{
    int* arr = new int[N];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cout << "Input number: " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    double average = (double)sum / N;
    cout << "Average number: " << average;
}

void Array(int N)
{
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cout << "Input number: " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Your array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}

int sum_matrix(int* arr, int N, int M) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += arr[i * M + j];
        }
    }
    return sum;
}

int min_element(int n) 
{
    int* arr = new int[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return min;
}

void Line() 
{
    cout << "\n-----------------------\n";
}

int main()
{
    cout << "Task 1\n";
    int number;
    cout << "Input n: ";
    cin >> number;
    cout << "Factoral = " << factorial(number);
    Line();

    cout << "Task 2\n";
    int a;
    int b;
    cout << "Input A and B:\n";
    cin >> a;
    cin >> b;
    cout << "a = " << a << ", b = " << b << endl;
    swap_ints(&a, &b);
    cout << "a = " << a << ", b = " << b;
    Line();

    cout << "Task 3\n";
    int N;
    cout << "Amount of numbers: ";
    cin >> N;
    cout << "Sum of array elements: " << array_sum(N);
    Line();

    cout << "Task 4\n";
    int arr[] = { 7, 1, 4, 8, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    Line();

    cout << "Task 5\n";
    int Num_5;
    cout << "Input amount of nums: ";
    cin >> Num_5;
    middleNum(Num_5);
    Line();

    cout << "Task 6\n";
    int Num_6;
    cout << "Input amount of nums: ";
    cin >> Num_6;
    Array(Num_6);
    Line();

    cout << "Task 7\n";
    int N7, M;
    cout << "Input N and M (matrix size): ";
    cin >> N7 >> M;

    int* arr2 = new int[N7 * M];

    srand(time(NULL));

    for (int i = 0; i < N7; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            arr2[i * M + j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < N7; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            cout << arr2[i * M + j] << " ";
        }
        cout << endl;
    }
    int sum = sum_matrix(arr2, N7, M);
    cout << "Sum of array elements: " << sum;
    Line();

    cout << "Task 8\n";
    int n8;
    cout << "Size of array: ";
    cin >> n8;
    cout << "Min element" << min_element(n8);
}


