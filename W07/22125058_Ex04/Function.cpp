int sumOfDigit(int x){
    if (x==0) return 0;
    return x%10 + sumOfDigit(x/10);
};
