#include <iostream>

class Stove{
    private: 
        int temperature = 0;

    public: 

    Stove(int temperature){
        setTemperature(temperature);
    }
    
    int getTemperature(){
        return temperature;
    }

    void setTemperature(int temperature){

        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature > 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
   
};

int main(){

    Stove stove(2);
    stove.setTemperature(5);
    std::cout << "The temperature settings is : " << stove.getTemperature() << std::endl;


    return 0;
}
