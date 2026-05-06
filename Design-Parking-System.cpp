1class ParkingSystem {
2public:
3int bigS,mediumS,smallS;
4    ParkingSystem(int big, int medium, int small) {
5         bigS = big;
6         mediumS = medium;
7         smallS = small;
8    }
9    
10    bool addCar(int carType) {
11        if(carType==1){
12            if(bigS==0)return false;
13            bigS--;
14        }
15        else if(carType==2){
16        if(mediumS==0)return false;
17        mediumS--;}
18        else{
19        if(smallS==0)return false;
20        smallS--;}
21
22        return true;
23    }
24    
25};
26
27/**
28 * Your ParkingSystem object will be instantiated and called as such:
29 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
30 * bool param_1 = obj->addCar(carType);
31 */