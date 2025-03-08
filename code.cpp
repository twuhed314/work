#include <iostream>
#include <thread>
#include <chrono>
#include <unordered_map>
#include <string>

using namespace std;

class TrafficSignal {
private:
    int greenTime;
    int redTime;
    int pedestrianTime;
    int trafficDensity;
    unordered_map<string, int> finesDatabase;

public:
    TrafficSignal(int green, int red, int pedestrian)
        : greenTime(green), redTime(red), pedestrianTime(pedestrian), trafficDensity(0) {}
 void adjustSignal(int density) {
        trafficDensity = density;
        if (trafficDensity > 50) {
            greenTime += 10;
            redTime -= 10;
        } else {
            greenTime = 30;
            redTime = 30;
        }
    }
   int main(){
        TrafficSignal signal(30, 30, 20);

    int trafficDensity;
    cout << "Enter traffic density (0-100): ";
    cin >> trafficDensity;

    signal.adjustSignal(trafficDensity);
       return 0;
   }            
