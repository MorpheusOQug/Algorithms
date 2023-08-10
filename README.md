# Algorithms
 
7 thuật toán IT nên cần phải biết
  1. Sắp xếp (Sorting)
     - __Sắp xếp nổi bọt (Bubble sort):__  
    - Thuật toán sắp xếp đơn giản lặp lại qua một danh sách, so sánh các phần tử theo cặp và hoán đổi chúng cho đến khi các phần tử lớn hơn "nổi bong bóng" đến cuối danh sách và các phần tử nhỏ hơn nằm ở "dưới cùng".  
    - Độ phức tạp thời gian: O (n^2). Trong trường hợp xấu nhất (khi danh sách theo thứ tự ngược lại), thuật toán này sẽ phải hoán đổi mọi item của mảng. flag swapper của chúng ta sẽ được đặt thành true trên mỗi lần lặp. Do đó, nếu chúng ta có n phần tử trong danh sách của mình, chúng ta sẽ có n lần lặp trong mỗi mục. 
     
     - __Sắp xếp chèn (Insertion sort):__  
     - __Sắp xếp chọn (Selection sort):__  
    - Thuật toán này phân chia danh sách thành hai phần: được sắp xếp và chưa được sắp xếp. Chúng ta liên tục xóa phần tử nhỏ nhất của phân đoạn chưa sắp xếp của danh sách và nối nó vào phân đoạn sắp xếp.  
    - Độ phức tạp thời gian: O (n^2). Đối với một danh sách có n phần tử, vòng lặp ngoài lặp lại n lần. Vòng lặp bên trong lặp lại n-1 khi i bằng 1, và sau đó n-2 vì j bằng 2 và cứ thế. Số lượng so sánh là (n-1)+(n-2)+...+1.
    
     - __Sắp xếp nhanh (Quick sort):__  

     - __Sắp xếp trộn (Merge sort):__
    
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
