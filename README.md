# Algorithms
 
7 thuật toán IT nên cần phải biết
  1. Sắp xếp (Sorting)
     - __Sắp xếp nổi bọt (Bubble sort):__  
    - Thuật toán sắp xếp đơn giản lặp lại qua một danh sách, so sánh các phần tử theo cặp và hoán đổi chúng cho đến khi các phần tử lớn hơn "nổi bong bóng" đến cuối danh sách và các phần tử nhỏ hơn nằm ở "dưới cùng".  
    - Độ phức tạp thời gian: O (n^2). Trong trường hợp xấu nhất (khi danh sách theo thứ tự ngược lại), thuật toán này sẽ phải hoán đổi mọi item của mảng. flag swapper của chúng ta sẽ được đặt thành true trên mỗi lần lặp. Do đó, nếu chúng ta có n phần tử trong danh sách của mình, chúng ta sẽ có n lần lặp trong mỗi mục. 

     - __Sắp xếp đống (Heap sort):__  
    - Thuật toán sắp xếp phổ biến này, như sắp xếp Chèn và Chọn, phân đoạn danh sách thành các phần được sắp xếp và chưa sắp xếp. Nó chuyển đổi phân đoạn chưa sắp xếp của danh sách thành cấu trúc dữ liệu Heap, để chúng ta có thể xác định hiệu quả phần tử lớn nhất.  
    - Độ phức tạp thời gian: O (nlog(n)). Trước tiên chúng ta hãy xem xét độ phức tạp thời gian của hàm heapify. Trong trường hợp xấu nhất, phần tử lớn nhất không bao giờ là phần tử gốc, điều này gây ra một lệnh gọi đệ quy để heapify. Trong khi các cuộc gọi đệ quy có vẻ expensive, hãy nhớ rằng chúng ta đang làm việc với cây nhị phân.Hình dung một cây nhị phân có 3 phần tử, nó có chiều cao là 2. Bây giờ hãy hình dung một cây nhị phân có 7 phần tử, nó có chiều cao là 3. Cây phát triển logarit theo n. Hàm heapify đi ngang qua cây đó trong thời gian O (log (n)). Hàm heap_sort lặp lại qua mảng n lần.  
     
     - __Sắp xếp chèn (Insertion sort):__  
    - Giống như Lựa chọn Sắp xếp, thuật toán này phân chia danh sách thành các phần được sắp xếp và chưa sắp xếp. Nó lặp lại trên phân đoạn chưa sắp xếp và chèn phần tử đang được xem vào vị trí chính xác của danh sách được sắp xếp.  
    - Độ phức tạp thời gian: O (n^2).Trong trường hợp xấu nhất, một mảng sẽ được sắp xếp theo thứ tự ngược lại. Vòng lặp for bên ngoài trong chức năng Sắp xếp chèn luôn lặp lại n-1 lần. Vòng lặp for bên trong sẽ hoán đổi một lần, sau đó hoán đổi hai lần và cứ thế. Số lượng giao dịch hoán đổi sau đó sẽ là 1 + 2 + ... + (n - 3) + (n - 2) + (n - 1).  

     - __Sắp xếp chọn (Selection sort):__  
    - Thuật toán này phân chia danh sách thành hai phần: được sắp xếp và chưa được sắp xếp. Chúng ta liên tục xóa phần tử nhỏ nhất của phân đoạn chưa sắp xếp của danh sách và nối nó vào phân đoạn sắp xếp.  
    - Độ phức tạp thời gian: O (n^2). Đối với một danh sách có n phần tử, vòng lặp ngoài lặp lại n lần. Vòng lặp bên trong lặp lại n-1 khi i bằng 1, và sau đó n-2 vì j bằng 2 và cứ thế. Số lượng so sánh là (n-1)+(n-2)+...+1.
    
     - __Sắp xếp nhanh (Quick sort):__  
    - Thuật toán phân chia và trị này là thuật toán sắp xếp được sử dụng thường xuyên nhất được đề cập trong bài viết này. Khi được định cấu hình chính xác, nó cực kỳ hiệu quả và không yêu cầu sử dụng merge sort. Chúng tôi phân vùng danh sách xung quanh một phần tử trục, sắp xếp các giá trị xung quanh trục.  
    - Độ phức tạp thời gian: O (n).  
       + Quick Sort được sử dụng rất nhiều vì độ phức tạp thời gian trung bình nhanh hơn nhiều. Trong khi hàm phân vùng sử dụng các vòng lặp lồng nhau trong khi các vòng lặp, nó sẽ so sánh trên tất cả các phần tử của mảng để thực hiện các giao dịch hoán đổi của nó.   
       + Trường hợp xấu nhất: O (n^2). Khi phần tử nhỏ nhất hoặc lớn nhất luôn được chọn làm trục. Điều này sẽ tạo các phân vùng có kích thước n-1, gây ra các cuộc gọi đệ quy n-1 lần.
       + Độ phức tạp trung bình: O (nlog(n)). Với một trục tốt, chức năng Quick Sort sẽ phân vùng mảng thành một nửa, phát triển logarit với n.  

     - __Sắp xếp trộn (Merge sort):__  
    - Thuật toán phân chia và trị này chia một danh sách thành một nửa và tiếp tục chia danh sách cho 2 cho đến khi nó chỉ có các phần tử số ít. Các phần tử liền kề trở thành các cặp được sắp xếp, sau đó các cặp được sắp xếp cũng được merge và sắp xếp với các cặp khác. Quá trình này tiếp tục cho đến khi chúng ta nhận được một danh sách được sắp xếp với tất cả các yếu tố của danh sách đầu vào chưa được sắp xếp.  
    - Độ phức tạp thời gian: 0 (nlog(n)). Trước tiên chúng ta hãy xem chức năng merge. Phải mất hai danh sách và lặp lại n lần, trong đó n là kích thước của đầu vào kết hợp của chúng. Hàm merge_sort chia mảng đã cho thành 2 và sắp xếp đệ quy các mảng con. Vì đầu vào đang được đệ quy là một nửa của những gì đã được đưa ra, giống như cây nhị phân, điều này làm cho thời gian cần thiết để xử lý tăng logarit theo n.

  2. Tìm kiếm (Searching)
     - Tìm kiếm tuần tự (Linear search)
     - Tìm kiếm nhị phân (Binary search)
     - Tìm kiếm đồng nhất (Hashing)
  3. Thuật toán đệ quy (Recursive algorithms)
     - Đệ quy tuyến tính
     - Quay lùi (Backtracking)
     - Phân chia và trị (Divide and conquer)
  4. Tìm đường đi ngắn nhất (Shortest path algorithms)
     - Thuật toán Dijkstra
     - Thuật toán Bellman-ford
     - Thuật toán Floyd-warshall
  5. Thuật toán duyệt cây (Tree algorithms)
     - Duyệt cây theo thứ tự trước (Preorder traversal)
     - Duyệt cây theo thứ tự giữa (Inorder traversal)
     - Duyệt cây theo thứ tự sau (Postorder travesal)
     - Tìm kiếm cây (Tree searching)
  6. Tìm kiếm đồng nhất (Graph algorithms)
     - Duyệt đồ thị theo chiều rộng (BFS - Breadth First Search)
     - Duyệt đồ thị theo chiều sâu (DFS - Deep First Search)
     - Thuật toán Kruskal (Tìm cây khung nhỏ nhất)
     - Thuật toán Prim (Tìm cây khung nhỏ nhất)
  7. Thuật toán tìm kiếm chuỗi (String searching algorithms)
     - Thuật toán Brute force
     - Thuật toán Knuth-Morris-Pratt
     - Thuật toán Rabin-Karp
