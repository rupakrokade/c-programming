
int start_but = 34;
int stp_but = 18;
int pause_but = 4;
int resume_but = 12;
bool start_state = 0;
bool stp_state = 0;
bool pause_state = 0;
bool resume_state = 0;

int tick = 0;
int time_e = 0;
int run_time = 0;
int start_time = 0;
int pause_time_e = 0;
int pause_run_time = 0;
int resume_time = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(start_but, INPUT_PULLUP);
  pinMode(stp_but, INPUT_PULLUP);
  pinMode(pause_but, INPUT_PULLUP);
  pinMode(resume_but, INPUT_PULLUP);

}

void read_but_status(){
if(!digitalRead(start_but)&& !start_state){
start_state = 1;
stp_state = 0;
start_time = time_e;
}
if(!digitalRead(stp_but)&& !stp_state){
stp_state = 1;
start_state = 0;
pause_state = 0;
resume_state = 0;


// pause_time_e = 0;
// pause_run_time = 0;
}

if(!digitalRead(pause_but)&& !pause_state && start_state){
pause_state = 1;
resume_state = 0;
pause_time_e = time_e;
pause_run_time = run_time;
}

if(!digitalRead(resume_but)&& !resume_state && pause_state){
resume_state = 1;
pause_state = 0;
resume_time = time_e;
// pause_time_e = 0;
// pause_run_time = 0;
 }

/*
Serial.print("start: ");
  Serial.print(start_state);
  Serial.print("  stp: ");
  Serial.print(stp_state);
Serial.print("  pause: ");
  Serial.println(pause_state);
  */
}
 
void stp_watc(){
 time_e = tick++;//millis()/1000;
if(start_state && !pause_state && !resume_state){
run_time = time_e - start_time;
Serial.print("STR - ");
}
 
else if( pause_state){
run_time = pause_run_time;
Serial.print("P - ");

} 
else if(resume_state){
  run_time =  (time_e - resume_time) + pause_run_time;
Serial.print("R - ");

}
else{
  run_time = 0;
Serial.print("ST0P - ");

}

int mins = run_time/60;
int secs = run_time - (mins*60);

Serial.print(mins);
Serial.print(":");
Serial.println(secs);
 /*
Serial.print("time_e: ");
Serial.print(time_e);
Serial.print("  run_time: ");
Serial.print(run_time);
// Serial.print("  pause_time_e: ");
// Serial.print(pause_time_e);
Serial.print("  resume_time: ");
Serial.print(resume_time);
Serial.print("  pause_run_time: ");
Serial.println(pause_run_time);
 */
}
void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
  /*
  Serial.print("start: ");
  Serial.print(digitalRead(start_but) );
  Serial.print("  stp: ");
  Serial.print(digitalRead(stp_but));
  Serial.print("  pause: ");
  Serial.println(digitalRead(pause_but));
*/

 read_but_status();
   stp_watc();
   delay(100);
}
