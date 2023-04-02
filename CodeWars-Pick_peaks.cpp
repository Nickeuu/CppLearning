#include <cinttypes>
#include <list>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>


using namespace std;

struct PeakData {
  vector<int> pos, peaks;
};

PeakData pick_peaks(const std::vector<int> &v) {
    PeakData result;
    if (v.size() == 0) return result;

    

    return result;
}

int main(){
    PeakData actual;
    actual = pick_peaks(std::vector<int> {3, 2, 3, 6, 4, 1, 2, 3, 3, 3, 2, 3});
    for (int i = 0; i < 2; i++){
        cout << actual.pos[i] << endl << actual.peaks[i] << endl;
    }
    return 0;
}
