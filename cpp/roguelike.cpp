/* It would be cool to try out ncurses library and line drawing characters
U+2550	═
U+2551	║
U+2554	╔
U+2557	╗
U+255A	╚
U+255D	╝
U+2560	╠
U+2563	╣
U+2566	╦
U+2569	╩
U+256C	╬
*/

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

using namespace std;

int room();
class rand_int;

int main (int argc, char** argv) {
    // just testing a timer
    chrono::steady_clock::time_point t = chrono::steady_clock::now();
	chrono::duration<float, milli> d = chrono::steady_clock::now() - t;
	cout << d.count() << endl;
    // ------------------
	room();
	return 0;
}

int room() {
    rand_int r{0, 100};
	return 0;
}
class rand_int {
        rand_int(int lo, int hi) : p{lo,hi} { }
        // store the parameters
        int operator()() const { return r(); }
    private:
        uniform_int_distribution<>::param_type p;
        auto r = bind(uniform_int_distribution<>{p},default_random_engine{});
};
