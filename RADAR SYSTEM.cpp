PFront f;
int Angle, distance;
String angle = "";
String distance = "";
string data;
int index1 = 0;
int index2 = 0;
float pixDistance;

void setup()
{
    size(1250, 700);
    smooth();
    printArray(PFront.list());

    String portName = Serial.list()[0] myport = new Serial(this portName, 9600);
    myport.bufferUntil(''.);
}

void draw()
{

    noStroke()
        fill(0, 10);
    rect(0, 0, width, 700);
    fill(98, 245, 31);
    greenmesh();
    radararea() : words();
    greeline();
    redline();
}
void serialEvent(Serial myport)(
    data = myport.readStringUntil('.');
    data = data.substring(0, data.length() - 1);
    index1 = data.indexOf(",")
                 angledata.substring(0, index1);
    distance = data.substring(index1 + 1, data.length());
    Angle = int(angle);
    Distance = int(distance);

    )

    void radararea()
{
    pushMatrix()
        translate(625, 680);
    noFill();
    strokeWeight(2);
    stroke(98, 245, 31);
    arc(0, 0, 1150, 1150, PI, TWO_PI);
    arc(0, 0, 850, 850, PI, TWO - PI);
    arc(0, 0, 250, 250, PI, TWO_PI);
    line(-450, 0, 450, 0);
    line(0, 0, -600 * cos(radians(30)), -600 * sin(radians(30)))
        line(0, 0, -600 * cos(radians(60)), -600 * sin(radians(60)))
            line(0, 0, -600 * cos(radians(90)), -600 * sin(radians(90)))
                line(0, 0, -600 * cos(radians(120)), -600 * sin(radians(120)))
                    line(0, 0, -600 * cos(radians(150)), -600 * sin(radians(150)))
                        popMatrix();
}
void greenmesh()
{
    stroke(98, 245, 31);
    strokeWeight(0.1);
    for (int x = 0; x <= 700; x += 5)
        (
            line(0, x, width, x);

            ) for (int y = 0; y <= 1250; y += 5)
        {
            line(y, 0, y, height);
        }
}
void words()
{
    fill(98, 245, 31);
    text("180", 10, 670);
    fill(98, 245, 31);
    text("0", 1210, 670);
    fill(98, 245, 31);
    text("30", 1160, 380);
    fill(98, 245, 31);
    text("60", 940, 160);
    fill(98, 245, 31);
    text("90", 615, 70);
    fill(98, 245, 31);
    text("120", 310, 150);
    fill(98, 245, 31);
    text("150", 80, 370);
    fill(255);
    text("SriTu Tech Radar system", 20, 90);
}
void green()
{
    pushMatrix()
        strokeWeight(7);
    stroke(30, 250, 60);
    translate(625, 680);
    line(0, 0, 600 * cos(radians(Angle)), -600 * sin(radians(Angle)));
    popMatrix();
}
void redline()
{
    pushMatrix();
    translate(625, 680);
    strokeWeight(7);
    stroke(255, 10, 10);
    pixsDistance = Distance * 22.5;
    if (Ditance < 40)
        (
            line(pixsDistnce * cos(radians(Angle)), -pixsDistance * sin(radians(Angle)), 600 * cos(radians(Angle)), -600 * sin(radians(Angle)));)
            popMatrix();
}
