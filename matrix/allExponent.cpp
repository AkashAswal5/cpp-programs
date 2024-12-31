using namespace std;

float allExponent(int baseValue, int exponentValue) {
    float res = 1;
    if (exponentValue >= 0) {
        // Use the helper function for positive exponent
        res = (float)positiveExponent(baseValue, exponentValue);
    } else {
        // For negative exponents, calculate the positive exponent and take the reciprocal
        int positiveExp = -exponentValue; // Convert negative exponent to positive
        res = 1.0 / (float)positiveExponent(baseValue, positiveExp);
    }
    return res;
}
