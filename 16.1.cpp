double Power_unsigned(double base, int exponent) {
	if (exponent == 1) return base;
	double res = Power_unsigned(base, exponent>>1);
	res *= res;
	if (exponent & 0x1 == 1) {
		res * = base;
	}
	return res;

double Power(double base, int exponent) {
	if (exponent == 0) return 1;
	if (exponent < 0 || base == 0) throw new std::exception();
	if (exponent < 0) return 1/Power(base, -exponent);
	return Power_unsigned(base, exponent);
}
