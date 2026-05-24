#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>&ct){
    int n= ct.size();
    for (int i=n-1; i>=0; i--){
        bool swapped= false;
        for(int j=0; j<i; j++){
            if (ct[j]>ct[j+1]){
                int t= ct[j];
                ct[j]= ct[j+1];
                ct[j+1]= t;
                swapped= true;
            }
        }
        if (swapped==false){
            break;
        }
    }
}

void show(const vector<int>&ct){
    for(int x:ct){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    vector<int>ct= {67, 12, 48, 96, 55, 22, 26, 99};
    cout << "Mang truoc khi sap xep: ";
    show(ct);
    bubblesort(ct);
    cout << "Mang sau khi sap xep: ";
    show(ct);
}