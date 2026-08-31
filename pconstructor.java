public class pconstructor {

    String name;
    int marks;

    public pconstructor(String name, int marks) {
        this.name = name;
        this.marks = marks;
    }

    void display() {
        System.out.println("Name= " + name);
        System.out.println("Marks= " + marks);
    }

    public static void main(String[] arg) {

        pconstructor s1 = new pconstructor("Drashti", 102);
        pconstructor s2 = new pconstructor("Dhruti", 10);

        s1.display();
        s2.display();
    }
}