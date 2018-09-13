long fat(int x) {
    if(x = 0) {
        return 1;
    }
    else(x >= 1) {
        return x * fat(x - 1);
    }
}