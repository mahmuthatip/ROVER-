  

void setup() {

 Serial.begin(9600);
 
} 

void loop() {
    
    char encoder[19] ;
      encoder[0] = 'S' ;
      encoder[17] = 'F' ;
      encoder[18] = '\0';

      

    int motor_direction1 , motor_speed1 ,
      motor_direction2 , motor_speed2 ,
      motor_direction3 , motor_speed3 ,
      motor_direction4 , motor_speed4 ;


    

  
    


  
  
   motor_speed1 = random(0,256)     ;
   motor_direction1 = random(0,2) ;

   encoder[1]  =  motor_direction1 + '0'  ; 
   encoder[2]  =  motor_speed1 / 100+ '0' ;
   encoder[3]  = (motor_speed1%100) / 10+ '0'  ;
   encoder[4]  = motor_speed1%10 + '0'  ;

   
   
   motor_speed2 = random(0,256)    ;
   motor_direction2 = random(0,2)    ;

   encoder[5]  =  motor_direction2 + '0'  ;
   encoder[6]  =  motor_speed2 / 100 + '0' ;
   encoder[7]  = (motor_speed2%100) / 10 + '0'  ;
   encoder[8]  =  motor_speed2%10 + '0'  ;


    
   motor_speed3 = random(0,256)    ;
   motor_direction3 = random(0,2)     ; 

   encoder[9]  =  motor_direction3 + '0'  ;
   encoder[10]  =  motor_speed3 / 100 + '0' ;
   encoder[11]  = (motor_speed3%100) / 10 + '0'  ;
   encoder[12]  =  motor_speed3%10 + '0'  ;


    
   motor_speed4 = random(0,256)   ; 
   motor_direction4 = random(0,2)     ;

   encoder[13]  =  motor_direction4 + '0'  ;
   encoder[14]  =  motor_speed4 / 100 + '0' ;
   encoder[15]  = (motor_speed4%100) / 10 + '0'  ;
   encoder[16]  =  motor_speed4%10 + '0'  ;

  
  
  Serial.println(encoder);

  delay(5000) ;
  
   
} 
