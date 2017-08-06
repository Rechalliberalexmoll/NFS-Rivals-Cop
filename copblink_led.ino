//  模拟NFS Rival警车（巡逻警车、执法警车）警灯闪烁

void setup () {
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT); //指定数字输出端口
  pinMode(8, OUTPUT);
  digitalWrite(8,HIGH);//车灯LED
}
void loop() {
  for (i = 1; i <= 7; i++) //LED第一组循环
  {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    delay(200);//蓝灯亮
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    delay(200);//蓝灯灭
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    delay(200);//蓝灯第二次亮
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    delay(200);//蓝灯第二次灭
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(200);//红灯亮
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(200);//红灯灭
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(200);//红灯第二次亮
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(200);//红灯第二次灭
  }
  for (i = 1; i <= 9; i++) //LED第二组循环
  {
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    delay(200);//内侧红灯亮
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    //内侧红灯灭
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    delay(200);//内侧蓝灯亮
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    //内侧蓝灯灭
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(200);//外侧红灯亮
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    //外侧红灯灭
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    delay(200);//外侧蓝灯亮
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    //外侧蓝灯灭
  }
}

