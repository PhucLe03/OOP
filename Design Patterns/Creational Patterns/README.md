## &nbsp;&nbsp;&nbsp;&nbsp;Creational Patterns

&nbsp;&nbsp;&nbsp;&nbsp;Creational Patterns là nhóm các Patterns cung cấp các cơ chế khởi tạo đối tượng (object creation mechanisms), giúp tăng tính linh hoạt (flexibility) và tái sử dụng (reuse) code có sẵn. Nhóm này gồm 5 mẫu: Factory Method, Abstract Factory, Builder, Prototype và Singleton.

&nbsp;&nbsp;&nbsp;&nbsp;Creational Patterns trừu tượng hóa quá trình khởi tạo, tạo ra một hệ thống độc lập với cách các đối tượng của nó được cấu thành và biểu thị. Một lớp (class) Creational Pattern sử dụng tính kế thừa để thay đổi lớp được khởi tạo, trong khi một đối tượng Creational Pattern sẽ ủy quyền khởi tạo cho một đối tượng khác.

&nbsp;&nbsp;&nbsp;&nbsp;Khi các hệ thống phát triển và trở nên phụ thuộc nhiều hơn vào thành phần đối tượng hơn là sự kế thừa (class inheritance), Creational Patterns càng trở nên quan trọng. Khi đó, việc code sẽ có xu hướng chuyển từ một tập hợp các hành vi cố định (fixed set of behaviors) tới một tập hợp nhỏ hơn với các hành vi cơ bản (fundamental behaviors) mà có thể được tổng hợp lại thành bất kỳ tập hợp phức tạp hơn. Do đó, việc tạo ra các đối tượng với các hành vi cụ thể đòi hỏi nhiều hơn là chỉ khởi tạo một class.

&nbsp;&nbsp;&nbsp;&nbsp;Các mẫu Creational Patterns có hai tính chất:
- Thứ nhất, chúng đều gói gọn mọi thứ về class cụ thể mà hệ thống sử dụng.
- Thứ hai, chúng ẩn cách mà các thể hiện của class (instance) được tạo ra và tổng hợp.

&nbsp;&nbsp;&nbsp;&nbsp;Tất cả những gì hệ thống nói chung biết về các đối tượng là các giao diện (interfaces) của chúng được định nghĩa bởi các lớp trừu tượng (abstract classes). Vì vậy, các Creational Patterns mang lại cho chúng ta rất nhiều sự linh hoạt (flexibility) về việc tạo ra cái gì (what), ai tạo ra nó (who), nó được tạo ra như thế nào (how) và khi nào (when).

&nbsp;&nbsp;&nbsp;&nbsp;Chúng cho phép chúng ta thiết lập cấu hình một hệ thống với các đối tượng "sản phẩm" rất khác nhau về cấu trúc và chức năng. Cấu hình có thể là tĩnh (static) - nghĩa là được chỉ định tại thời điểm biên dịch (compile-time), hoặc động (dynamic) - tại thời điểm chạy (run-time).
