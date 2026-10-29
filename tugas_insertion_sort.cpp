#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

string toLower(string s) {
    for (char &c : s) c = tolower(c);
    return s;
}

int main() {
    int n;
    cout << "masukkan jumlah kata: ";
    cin >> n;

    string data[100]; 

    for (int i = 0; i < n; i++) {
        cout << "masukkan kata ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout<<endl;

    cout << "proses insertion sort:\n";

    for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        while (j >= 0 && toLower(data[j]) > toLower(key)) {
            cout << "geser \"" << data[j] << "\" ke posisi indeks " << j + 1 << endl;
            data[j + 1] = data[j];
            j--;
        }
        
        data[j + 1] = key;
        cout << "sisipkan \"" << key << "\" di indeks " << j + 1 << "\n\n";
    }

    cout << "hasil akhir: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}