#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int max = v[0], min = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max){
            max = v[i];
        }
        if (v[i] < min){
            min = v[i];
        }
    }    
    cout << "Максимум: " << max << " " << "MIN: " << min << endl;
}
