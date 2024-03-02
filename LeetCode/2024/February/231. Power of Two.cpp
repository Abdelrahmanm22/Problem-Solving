class Solution {
public:
bool isPowerOfTwo(int n) {
    if(n<=0)return false;
    int a = log2(n);
    if (pow(2,a)==n)return true;
    else return false;
}
};