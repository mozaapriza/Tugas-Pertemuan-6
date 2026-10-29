#include <iostream>
using namespace std;

int main(){
    int data[] = {5, 2, 4, 1, 3};
    // 1, 2, 4, 5, 3
    int n = 5;

    for (int i = 0; i < n-1; i++){
        int minIndex = i; //patokan 5 (indeks 0)

        for (int j= i+1; j < n; j++){
                if(data[j] < data[minIndex]){ //2<5?
                minIndex = j; //indeks 1
            }
        }
        swap (data[i],data[minIndex]);
    }

    cout << "hasil selection sort : ";
    for (int i = 0; i < n; i++){
        cout<<data[i]<<" ";
    }

    return 0;
}