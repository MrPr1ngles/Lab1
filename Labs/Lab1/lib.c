

int gcd(int first, int second) { // Function - Euclidean algorithm(gcd) //
	while (first != 0 && second != 0) { // A loop that will subtract the smaller from the larger until the numbers become equal //
		if (first > second) {
			first %= second;
		}
		else {
			second %= first;
		}
	}
	return first+second;
}

int lcm(int first, int second) { // Function that finds LCM //
	return first * second / gcd(first, second);
}

