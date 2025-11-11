#include<bits/stdc++.h>
using namespace std;

int FindMax(vector<int> a, int n)
{
    int maxx = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > maxx)
            maxx = a[i];
    }
    return maxx;
}
int FindMin(vector<int> a, int n)
{
    int minn = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < minn)
            minn = a[i];
    }
    return minn;
}
int main() {
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int maxx = FindMax(a, n);
    int minn = FindMin(a, n);
    cout << "So lon nhat trong mang a la: " << maxx << endl;
    cout << "So be nhat trong mang a la: " << minn << endl;
    return 0;
    
}