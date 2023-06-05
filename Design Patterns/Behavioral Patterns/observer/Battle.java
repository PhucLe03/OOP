public class Battle {
    
    public static void main(String[] args) {
        Officer NguyenAnh = new Officer("Nguyen Anh");
        Soldier Le = new Soldier("Le");
        Soldier Hoang = new Soldier("Hoang");
        Soldier Phuc = new Soldier("Phuc");
        NguyenAnh.attach(Le);
        NguyenAnh.attach(Hoang);
        NguyenAnh.attach(Phuc);
        NguyenAnh.announce("Attack!");

        NguyenAnh.detach(Hoang);
        NguyenAnh.announce("Push forward!");
    }
}
