#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int>&vt, int x){
    int left=0;
    int rigth= vt.size()-1;
    while (left<=rigth){
    int mid= left +(left+rigth)/2;
    if(vt[mid]==x){
        return mid;
    }
    if(vt[mid]>x){
        rigth=mid-1;
    }else{
        left=mid+1;
    }
  }
     return -1;
}
int main(){
    vector<int>vt= {1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
    int x=5;
    int ketqua= binary(vt, x);
    cout << "So " << x << " duoc tim thay o index so " << ketqua;
}