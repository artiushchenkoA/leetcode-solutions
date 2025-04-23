bool isPowerOfTwo(int n) {
    if (n > 0) {
        if (!(n & (n - 1))) {
            return true;
        }
        return false;
    }
    return false;
}