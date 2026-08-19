#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for(int x = 1; x <= t; x++){

        int n;
        cin >> n;

        int a[n], b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }

        // -------------------------
        // Selection Sort
        // -------------------------

        int swaps = 0;

        for(int i = 0; i < n-1; i++){

            int min = a[i];
            int idx = i;

            for(int j = i+1; j < n; j++){

                if(a[j] < min){
                    min = a[j];
                    idx = j;
                }

            }

            if(idx != i){
                swap(a[idx], a[i]);
                swaps++;
            }
        }


        // -------------------------
        // Insertion Sort
        // -------------------------

        int shift = 0;

        for(int i = 1; i < n; i++){

            int temp = b[i];

            int j = i - 1;

            while(j >= 0 && b[j] > temp){

                b[j+1] = b[j];

                shift++;

                j--;
            }

            b[j+1] = temp;
        }


        // -------------------------
        // Compare
        // -------------------------

        if(swaps > shift){
            cout << "Insertion Sort";
        }
        else if(swaps < shift){
            cout << "Selection Sort";
        }
        else{
            cout << "Tie";
        }

        cout << endl;
    }
}
