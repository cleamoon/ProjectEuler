#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long n;
        cin >> n;
        unsigned long long n3 = (n-1)/3;
        unsigned long long n5 = (n-1)/5;
        unsigned long long n15 = (n-1)/15;
        cout << n3 * (n3 + 1) / 2 * 3 + n5 * (n5 + 1) / 2 * 5 - n15 * (n15 + 1) / 2 * 15 << endl;
    }
    return 0;
}
