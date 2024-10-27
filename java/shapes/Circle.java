class Circle implements Shape{
    int radius;

    Circle(int radius){
        this.radius = radius;
    }

    int area(){
        return 3.14*radius*radius;
    }
    
    int numberOfSides(){
        return 0;
    }

    String shapeName{
        return "Circle";
    }
}
