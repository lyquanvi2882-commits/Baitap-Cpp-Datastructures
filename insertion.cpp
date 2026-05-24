#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int>&vt){
    int n= vt.size();
for (int i=1; i<n; i++){
    int key=vt[i];
    int j=i-1;
    while (j>=0 && vt[j]>key){
        vt[j+1]= vt[j];
        j--;
    }
    vt[j+1]=key;
}
}

void printArray(const vector<int>&vt){
    for(int x:vt){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vt= {89, 35, 56, 1, 99, 3, 9};
    cout << "Ham truoc khi thay doi: ";
    printArray(vt);
    insertion(vt);
    cout << "Ham sau khi sap xep: ";
    printArray(vt);
}