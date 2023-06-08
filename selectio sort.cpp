#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = 1000000;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    ifstream file("data.CSV"); 

    if (!file) {
        cout << "Gagal membuka file." << endl;
        return 1;
    }

    vector<int> arr; 
    int value;

    while (file >> value) {
        arr.push_back(value);
    }

    file.close();
    int size =1000000;
    
    cout << "Data sebelum diurutkan: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr);

    cout << endl;
    cout<<endl;
    cout << "Data setelah diurutkan: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

