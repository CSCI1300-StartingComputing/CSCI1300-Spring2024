int dividePositives(int a, int b, int c) {
    int result = 0;

    if (a > 0 && b > 0 && c > 0) {
        result = a / b / c;
    } else if (a > 0 && b > 0){
        result = a / b;
    } else if (a > 0 && c > 0) {
        result = a / c;
    } else if (a > 0) {
        result = a;
    } else {
        if (b > 0 && c > 0) {
            result = b / c;
        } else if (b > 0) {
            result = b;
        } else if (c > 0) {
                result = c;
        } else {
            result = 0;
        }
    }

    return result;
}
