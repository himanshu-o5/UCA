int add(int num1, int num2) {
    int result = 0, carry = 0;

    for (int i = 0; i < 32; i++) {
        int bit1 = (num1 >> i) & 1;
        int bit2 = (num2 >> i) & 1;

        int sum = bit1 ^ bit2 ^ carry;
        carry = (bit1 & bit2) | (bit1 & carry) | (bit2 & carry);

        result |= sum << i;
    }

    return result;
}

int substract(int num1, int num2) {
    return add(num1, -num2);
}

int multiply(int num1, int num2) {
    int result = 0;
    for(int i=0; i<num2; i++) result = add(result + num1);
   
    return result;
}

int divide(int num1, int num2) {
    if (num2 == 0) {
        return -1;
    }
    return num1/num2;
}
