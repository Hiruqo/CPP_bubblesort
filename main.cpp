#include <iostream>

using namespace std;

void bubblesort(int tab[], int n);
void printTab(int tab[], int n);

int main() {

    int numbers[] = {1, 4, 6, 2, 3, 5, 9, 1};
    int N = sizeof(numbers)/sizeof(numbers[0]);

    cout << "Before change: ";
    printTab(numbers, N);

    cout << endl;

    bubblesort(numbers, N);

    return 0;
}

void bubblesort(int tab[], int n) {
    int i, j;
    int counter = 0;
    bool swapFlag;
    bool doneFlag;

    do {
        doneFlag = false;
        for(i = 0; i < n - 1; i++) {
            swapFlag = false;
            for(j = 0; j < n - i - 1; j++) {
                if(tab[j] > tab[j+1]) {
                    swap(tab[j], tab[j+1]);
                    swapFlag = true;
                    counter++;
                    
                    // print every stage of bubble sort
                    cout << "Correction:  ";
                    printTab(tab, n);
                }
            }

            // if no swap -> break
            if(swapFlag == true) break;
        }
        if( (i == n - 1) && (counter != 0) ) doneFlag = true;
    } while(doneFlag == false);
}

void printTab(int tab[], int n) {
    for(int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}