class Stepper {
  private:
    int steps_1mm = 1;
    int min_travel_limit = 1;
    int max_travel_limit = 100;
    bool INIT = false;

    bool move_1mm(){
      delay(10);
      Serial.println("moved by 1mm");
      return true;    
    }
  public:
    bool direction = true;
    int speed = 10;

    bool init(int steps1mm, int min_t, int max_t){
      INIT = true;
      steps_1mm = steps1mm;
      min_travel_limit = min_t;
      max_travel_limit = max_t;
      return true;
    }

    bool move(int distance_mm){
      if(INIT){
        if(distance_mm > 0){
          for(int i = 0; i < distance_mm; i++ ){
            move_1mm();
          }
          Serial.print("moved by ");
          Serial.print(distance_mm);
          Serial.println("mm");
          return true;
        }else{
          return false;
        }
      }else{
        Serial.println("Object not initialized");
        return false;
      }
    }
    bool move_continuous(bool state){
      if(INIT){
        if(state){
          move_1mm();
          return true;
        }else{
          return false;
        }
      }else{
        Serial.println("Object not initialized");
        return false;
      }
    }
  
};

Stepper stepper;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  stepper.init(10, 1, 45);
  stepper.direction = false;
  stepper.speed = 55;
  stepper.move(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
