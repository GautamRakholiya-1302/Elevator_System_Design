class Elevator {
private:
    int currentFloor;
    bool doorsOpen;

public:
    Elevator() : currentFloor(1), doorsOpen(false) {
        
    }

    int getCurrentFloor() {
        return currentFloor;
    }

    bool areDoorsOpen() {
        return doorsOpen;
    }

    void moveToFloor(int floor) {
        if (floor > currentFloor) {
           
            for (int i = currentFloor; i <= floor; ++i) {
               
                currentFloor = i;
            }
        } else if (floor < currentFloor) {
           
            for (int i = currentFloor; i >= floor; --i) {
               
                currentFloor = i;
            }
        }
       
    }

    void openDoors() {
        doorsOpen = true;
    }

    void closeDoors() {
        doorsOpen = false;
    }

    void requestFloor(int floor) {
        
    }
};
