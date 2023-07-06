
# &nbsp;&nbsp;&nbsp;&nbsp;Định nghĩa Design Pattern

&nbsp;&nbsp;&nbsp;&nbsp;Design Patterns (tạm dịch là "mẫu thiết kế") là các giải pháp điển hình cho các vấn đề thường xảy ra trong thiết kế phần mềm. Chúng giống như các bản thiết kế có sẵn mà chúng ta có thể tùy chỉnh để giải quyết vấn đề thường gặp trong lúc lập trình.

&nbsp;&nbsp;&nbsp;&nbsp;Design Patterns không phải là một đoạn code cụ thể nào, mà là một khái niệm chung, một concept chung dùng để giải quyết một vấn đề đặc thù. Nó không như các hàm hoặc thư viện có sẵn, các Design Patterns không thể copy y chang vào trong code của mình, ta chỉ có thể làm theo chi tiết của từng mẫu và tự thực hiện theo mẫu sao cho phù hợp với chương trình thực tế của mình.

&nbsp;&nbsp;&nbsp;&nbsp;Design Patterns thường bị nhầm lẫn với các giải thuật (algorithms), bởi vì cả hai khái niệm đều mô tả các giải pháp điển hình cho một số vấn đề đã biết. Giải thuật thì luôn xác định một tập hợp rõ ràng các hành động có thể đạt được một số mục tiêu, còn Design Pattern thì mô tả cao cấp hơn về một giải pháp. Code của cùng một pattern khi áp dụng cho hai chương trình khác nhau có thể sẽ rất khác nhau. Giải thuật như công thức nấu ăn (đều gồm các bước rõ ràng), còn Design Pattern thì như một bản thiết kế (chỉ thấy kết quả và tính năng, còn để thực hiện thì lại tùy vào người xây dựng).

&nbsp;&nbsp;&nbsp;&nbsp;Hầu hết các Design Patterns đều được mô tả chính thức nên mọi người đều có thể "tái tạo" chúng trong nhiều hoàn cảnh. Các mô tả thường gồm những phần như:
- Mục đích của pattern để giải quyết vấn đề nào và giải pháp
- Giải thích đặc điểm của vấn đề và sự phù hợp của pattern trong việc giải quyết
- Mô hình của pattern và chức năng của các thành phần
- Code ví dụ, thường được viết bằng mã giả (pseudocode) hay các ngôn ngữ lập trình phổ biến để người học hiểu sâu hơn

# &nbsp;&nbsp;&nbsp;&nbsp;Đôi nét về lịch sử của Design Pattern
&nbsp;&nbsp;&nbsp;&nbsp;Design Patterns là các giải pháp điển hình cho các vấn đề phổ biến trong lập trình hướng đối tượng. Khi một giải pháp được lặp đi lặp lại trong nhiều dự án khác nhau, cuối cùng ai đó sẽ đặt tên cho nó và mô tả chi tiết giải pháp đó. Đó là cách mà một Pattern được phát hiện. Vậy, Design Patterns không phải phát minh, mà là những phát hiện trong quá trình thiết kế phần mềm của những nhà phát triển.

&nbsp;&nbsp;&nbsp;&nbsp;Khái niệm về các "patterns" được Christopher Alexander mô tả lần đầu tiên trong "A Pattern Language: Towns, Buildings, Construction". Cuốn sách mô tả một “ngôn ngữ” để thiết kế môi trường đô thị. Các đơn vị của ngôn ngữ này là các pattern. Chúng có thể mô tả cửa sổ nên cao bao nhiêu, tòa nhà nên có bao nhiêu tầng, diện tích cây xanh trong khu phố nên là bao nhiêu, v.v.

&nbsp;&nbsp;&nbsp;&nbsp;Năm 1994, Erich Gamma, John Vlissides, Ralph Johnson và Richard Helm cho xuất bản cuốn sách "Design Patterns: Elements of Reusable Object-Oriented Software", áp dụng khái niệm mẫu thiết kế vào lập trình. Cuốn sách giới thiệu 23 mẫu giải quyết các vấn đề khác nhau của thiết kế hướng đối tượng và đã trở thành cuốn sách bán chạy nhất rất nhanh chóng. Do cái tên dài dòng của nó, mọi người bắt đầu gọi nó là "cuốn sách của nhóm bốn người" hay "cuốn sách GoF".

&nbsp;&nbsp;&nbsp;&nbsp;Kể từ đó, hàng chục patterns hướng đối tượng khác đã được phát hiện. Việc tìm ra các patterns trở nên phổ biến trong lĩnh vực lập trình, và hiện đã có rất nhiều patterns nằm ngoài lập trình hướng đối tượng.

# &nbsp;&nbsp;&nbsp;&nbsp;Số lượng và phân loại Design Pattern trong lập trình hướng đối tượng
&nbsp;&nbsp;&nbsp;&nbsp;Như đã giới thiệu ở trên, hiện trên thế giới có rất nhiều Design Patterns được phát hiện sau khi GoF xuất bản sách về chúng vào năm 1994. Tuy nhiên, 23 Design Patterns được giới thiệu trong sách là chuẩn mực nhất và được áp dụng rộng rãi nhất. Vậy chúng ta sẽ đi vào nghiên cứu 23 mẫu này.

&nbsp;&nbsp;&nbsp;&nbsp;Căn cứ vào mục đích sử dụng, ta có thể chia 23 Design Patterns thành 3 nhóm:
- [Creational Pattern](/Creational-Patterns) (gồm 5 mẫu) cung cấp các cơ chế tạo đối tượng giúp tăng tính linh hoạt và tái sử dụng code hiện có.
- [Structural Pattern](/Structural-Patterns) (gồm 7 mẫu) tập hợp các đối tượng và lớp thành các cấu trúc lớn hơn, đồng thời giữ cho các cấu trúc này linh hoạt và hiệu quả.
- [Behavioral Pattern](/Behavioral-Patterns) (gồm 11 mẫu) quản lý việc giao tiếp hiệu quả và phân công trách nhiệm giữa các đối tượng.

# &nbsp;&nbsp;&nbsp;&nbsp;Lý do nên học Design Pattern
&nbsp;&nbsp;&nbsp;&nbsp;Design Patterns là một bộ công cụ gồm các giải pháp đã được thử nghiệm và kiểm tra cho các vấn đề phổ biến trong thiết kế phần mềm. Ngay cả khi chúng ta chưa bao giờ gặp phải những vấn đề này, thì việc biết các mẫu vẫn hữu ích vì nó dạy chúng ta cách giải quyết tất cả các loại vấn đề bằng cách sử dụng các nguyên tắc của lập trình hướng đối tượng.

&nbsp;&nbsp;&nbsp;&nbsp;Design Patterns có thể thiết lập một ngôn ngữ chung để dễ dàng làm việc với đồng nghiệp của mình hiệu quả hơn. Chẳng hạn như câu nói: “Chỗ này dùng Singleton đi.”, người biết về Design Pattern sẽ hiểu ý tưởng và không cần giải thích Singleton là gì khi đã biết tên và công dụng của nó.
