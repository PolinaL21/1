long power(long num, long deg) {
    long result = 1;

    for(long i = 0; i < deg; i++) {
        result *= num;
    }

    return result;
}
