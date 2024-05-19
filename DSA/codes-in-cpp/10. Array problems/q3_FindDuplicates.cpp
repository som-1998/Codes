
// codeing ninga -> Duplicate In Array


// 0^i = i ; i^i = 0.
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    // XOR ing the elements togather. 
    for (int i = 0 ; i<arr.size(); i++){
        ans = ans^arr[i];
    }
	
    // XOR ing the array againg 1 to N-1 to make them 0.
    for (int j = 1 ; j<arr.size(); j++){
        ans = ans^j;
    }
    return ans;
}
