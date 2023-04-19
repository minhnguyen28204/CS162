class Solution {
private:
    int arr[40];
public:
    int tribonacci(int n) {
        if (n==0) return arr[n] = 0;
        if (n==1) return arr[n] = 1;
        if (n==2) return arr[n] = 1;
        if (arr[n]) return arr[n];
        arr[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return arr[n];
    }
};