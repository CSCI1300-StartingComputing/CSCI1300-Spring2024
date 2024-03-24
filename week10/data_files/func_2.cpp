int addPositives(int a, int b, int c) {
    int result = 0;

    if (a > 0) { if (b > 0) { if (c > 0) {
                result = a + b + c;
            } else {
                result = a + b;
            }
        } else {
            if (c > 0) {
                result = a + c;
            } else {
                result = a;
            }
        }
    } else {
        if (b > 0) {
            if (c > 0) {
                result = b + c;
            } else {
                result = b;
            }
        } else {
            if (c > 0) {
                result = c;
            } else {
                result = 0;
            }
        }
    }

    return result;
}
