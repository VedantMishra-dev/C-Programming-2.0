#include <iostream>
using namespace std;
// American Standard coversion of international interchange
int main() {
    int arr[] = {34,67, 104 ,111, 111 ,115 ,105 ,110 ,103 ,32, 110, 111, 116, 32, 116, 111, 46 ,46, 46, 46, 46, 
        102, 111 ,114, 32, 110, 111, 119, 46, 46, 46, 46 ,46, 46, 46,34}; // "Beware the fury of a patient man"

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << char(arr[i]);
    }
    return 0;
}
