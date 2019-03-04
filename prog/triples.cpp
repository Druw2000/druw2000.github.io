#include "math"
#include "string"

using namespace std;

char* main (int argc, char* argv[]) {
	char[] in  = new char[3];
	char[] out = new char[3];

	in[0] = argv[1];	// a0
	in[1] = argv[2];	// b0
	in[2] = argv[3];	// c0

	cout << in[0] << ", " << in[1] << ", " << in[2] << endl;

	out[0] = in[0] + 1; // a1 = a0 + 1
	out[2] = in[1] + 1;	// c1 = b1 + 1
	out[1] = in[] + in[];

	if (sqr(out[0]) == out[1] + out[2]) {
		return out;
	} 
	else {
		return null;
	}
}
