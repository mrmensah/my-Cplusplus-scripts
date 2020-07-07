// #pragma once

class room {
    
    public:
        double areaInFeet();
        double areaInSquareMeter();
        void getParams(double, double);
    
    // private:
        double length;
        double width;
        double feetFactor = 0.09290304;
};