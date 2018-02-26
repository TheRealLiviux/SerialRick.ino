String head="Never gonna ";
String verses[6]={"give you up","let you down","run around and desert you","make you cry","say goodbye","tell a lie and hurt you"};

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
}

void loop() {
  Serial.println("");
  for(int i = 0 ; i < 6 ; i++) {
    Serial.print(head);
    Serial.println(verses[i]);
    delay(500);
  }
  delay(2000);
  Serial.println("");

}
