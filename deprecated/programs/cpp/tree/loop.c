// Write a function which calls itself a determined number of times
//and useful when I dont wont to write a loop
// Output symbols
//? prompt
//: statement
//= condition

int loop(int i, int j) {
	if (i == j) {
		return 0;
	}
	return loop(i+1, j);
}
