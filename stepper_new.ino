#define UP 1
#define DOWN 0
#define STEPS_FOR_1MM 10
#define MIN_LIMIT 1
#define MAX_LIMIT 100
#define SPEED 1000

class Stepper {
  private:
    int steps_1mm = 1;
    int min_travel_limit = 1;
    int max_travel_limit = 100;
    bool INIT = false;
    int traversed_length = 0;

    bool move_1mm(){
      delay(speed);
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

    bool check_limits(){
      if(traversed_length > max_travel_limit){
        Serial.println("MAX limit breached");
        return true;
      }else if (traversed_length < min_travel_limit){
        Serial.println("MIN limit breached");
        return true;
      }else{
        return false;
      }
    }

    bool move(int dis_mm, int dir){
      if(INIT){
        direction = dir;
        if(dir){
        for(int i = 0; i < dis_mm; i++ ){
            move_1mm();
            traversed_length++;
            if(check_limits()){
              break;
            }
          }
        Serial.print("Moved UP by ");
        Serial.print(dis_mm);
        Serial.println("mm");
        Serial.print("traversed_length: ");
        Serial.println(traversed_length);
        }else{
        for(int i = 0; i < dis_mm; i++ ){
            move_1mm();
            traversed_length--;
            if(check_limits()){
              break;
            }
          }
        Serial.print("Moved DOWN by ");
        Serial.print(dis_mm);
        Serial.println("mm");
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
  stepper.init(STEPS_FOR_1MM, MIN_LIMIT, MAX_LIMIT);
  //stepper.direction = false;
  stepper.speed = SPEED;
  // stepper.move(5, UP);
  stepper.move(7, UP);
  // stepper.move(7, DOWN);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
