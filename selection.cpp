#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>&vt){
    int n= vt.size();
    for (int i=0; i<n-1; i++){
        int min=i;
        for (int j=i+1; j<n; j++){
            if(vt[j]<vt[min]){
                min=j;
            }
        }
        int t=vt[i];
        vt[i]=vt[min];
        vt[min]=t; 
    }
}

void show(const vector<int>&vt){
    for (int x:vt){
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int>vt= {29, 10, 22, 34, 58, 1, 7, 5, 99};
    cout << "Mang truoc khi sap xep: ";
    show(vt);
    selectionsort(vt);
    cout << "Mang sau khi da sap xep: ";
    show(vt);
}