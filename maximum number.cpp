// find maximum number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];   // assume first element is max

    for(int i = 0; i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"maximum number in array is:"<<max<<endl;
    return 0;
}
