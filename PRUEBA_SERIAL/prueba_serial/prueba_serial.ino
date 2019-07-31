const int ledPIN = 9;
 
void setup() {
  Serial.begin(9600);    //iniciar puerto serie
  Serial1.begin(9600); 
  pinMode(ledPIN , OUTPUT);  //definir pin como salida
  
}
 
void loop(){
  int key = 0;
  digitalWrite(ledPIN , LOW);    // poner el Pin en LOW
  String str = Serial1.readString();//from android
  String str2 = Serial.readString();
  if (str.equals("")!=1){Serial.println(str);}
  if (str.equals("Inicia#")){
       Serial1.print("#Inic~"); 
       Serial.print("#Inic~");
       Serial1.print("#Datos~"); 
       Serial.print("#Datos~");
       str = Serial1.readString();
       Serial.println(str);
       Serial.print("#Envia~");
       Serial1.print("#Envia~");
       while(key ==0)
       {  str = Serial1.readString();
           if (str.equals("")!=1)
           {Serial.println(str);}
           if (str.equals("Ultimo#"))
           {Serial.println(str);
           key =1;
           while(1){
            digitalWrite(ledPIN , HIGH); 
            }
           
           }
           
            Serial.println("#Sig~");
            Serial1.print("#Sig~");
        }
       }
    
  
}
