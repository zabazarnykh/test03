#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, i, t;
    cin >> n;
    vector<int> v;
    v.push_back(1);
    cout << v[0]<< endl;
    for (i = 2; i<=n; ++i){
	vector<int> k;
	k.push_back(1);
	for(t = 0; t < i - 2; ++t){
	    k.push_back(v[t]+v[t+1]);
	}
	k.push_back(1);
	for(t = 0; t < i; ++t){
	    cout << k[t]<< " ";
	    v = k;
	}
	cout << endl;
    }
    return 0;
}
