void writebin(int number, int from, int to) {
    for (int i = from; i <= to; i++) {
        digitalWrite(i, number%2);
        number >>= 1;
    }
}
