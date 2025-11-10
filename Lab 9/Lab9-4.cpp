#include <iostream>
using namespace std;

void bubbleSort(float* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter the number of scores: ";
    cin >> size;

    float* scores = new float[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter score #" << (i + 1) << ": ";
        cin >> scores[i];
    }

    float total = 0;
    for (int i = 0; i < size; i++) {
        total += scores[i];
    }
    float average = total / size;
    cout << "Average score: " << average << endl;

    bubbleSort(scores, size);

    cout << "Scores in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    delete[] scores;
    return 0;
}
