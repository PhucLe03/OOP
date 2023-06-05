class Director
{
    public static void main(String[] args) 
    {
        StudentBuilder studentBuilder = new StudentConcreteBuilder()
                .setFirstName("Le")
                .setLastName("Hoang Phuc");
        System.out.println(studentBuilder.build());
        studentBuilder.printName();
    }
}