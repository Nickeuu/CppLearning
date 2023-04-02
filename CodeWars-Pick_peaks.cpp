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

    int val = 0, aux_val = 0;
    bool isAscending = false, insertedVal = false;

    for(unsigned long i = 0; i < v.size() - 1; i++){
        val = v[i];
        if(val < v[i+1]){
            isAscending = true;
        }else if(val > v[i+1]){
            if(isAscending && val == v[i-1] && (i-1) > 0){
                for (unsigned long j = i-1; j > 1; j--){
                    if(val != v[j-1]){
                        result.peaks.push_back(v[j]);
                        result.pos.push_back(j);
                        insertedVal = true;
                        break;
                    }
                }
            }else if(isAscending){
                result.peaks.push_back(v[i]);
                result.pos.push_back(i);
                insertedVal = true;
                isAscending = false;
            }
        }
    }
    if (!insertedVal){
        if(v[1] > v[0] && v[v.size() - 1] < v[1]){
            result.peaks.push_back(v[1]);
            result.pos.push_back(1);
        }
    }

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
