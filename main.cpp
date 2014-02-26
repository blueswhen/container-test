// copyright with blueswhen

#include <vector>
#include <sys/time.h>
#include <iostream>

using namespace std;

int main() {
    timeval starTime;
    timeval endTime;

    // vector<int> vec(1000);
    vector<int> vec;
    int arr[10000];
    for (int i = 0; i < 10000; i++) {
        vec.push_back(i);
        // vec[i] = i;
        // vec.at(i) = i;
        // arr[i] = i;
    }
    gettimeofday(&starTime, NULL);
    int vecSize = vec.size();
    for (int i = 0; i < vecSize; i++) {
        vector<int>::iterator vecPtr = vec.begin() + 2 * i;    // insert at intervals of one value
        vec.insert(vecPtr, i);
    }

    gettimeofday(&endTime, NULL);
    int time = 1000000 * (endTime.tv_sec - starTime.tv_sec) + endTime.tv_usec - starTime.tv_usec;
    cout<<time<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.max_size()<<endl;
    return 0;
}
