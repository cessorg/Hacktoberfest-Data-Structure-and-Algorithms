// code by ycyseng
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(int data[], int search, int n) {
    int left=0, right=n-1;
    while (left <= right){
        int mid = (left + right) / 2;

        if (data[mid] == search) {
            return mid;
        }else if (data[mid] > search) {
            right = mid - 1;
        }else if (data[mid] < search) {
            left = mid + 1;
        }
    }
    return -1; //not found
}

int main(){
    int search, ans;
    int data[10] = {};

    cout << "Please enter 10 numbers: \n";
    for(int i=0; i<10; i++){
        cin >> data[i];
    }

    sort(data, data+10);

    cout << "Please enter number you want to find\n";
    cin >> search;

    ans = binarysearch(data, search, sizeof(data) / sizeof(int));

    if (ans < 0){
        cout << "Not found...\n";
    }else{
        cout << "Find it !!\n";
    }
    return 0;
}

