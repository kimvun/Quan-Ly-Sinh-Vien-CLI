# 🎓 Chương Trình Quản Lý Sinh Viên (C)

Ứng dụng quản lý sinh viên đơn giản viết bằng ngôn ngữ C, chạy trên giao diện dòng lệnh (CLI) trong môi trường Linux/WSL2.

## ✨ Tính năng chính
- **Nhập danh sách sinh viên**: Nhập họ tên, mã số sinh viên (MSSV) và điểm số.
- **In danh sách**: Hiển thị toàn bộ sinh viên có trong hệ thống.
- **Tìm kiếm sinh viên**: Tìm chính xác sinh viên theo MSSV.
- **Sắp xếp điểm**: Sắp xếp danh sách sinh viên theo điểm từ cao xuống thấp.

## 🛠️ Kiến thức & Kỹ thuật áp dụng
- Quản lý dữ liệu với cấu trúc `struct`.
- Thao tác truyền con trỏ và mảng cấu trúc.
- Xử lý sạch bộ nhớ đệm (Input Buffer) với `fgets()`, `strcspn()`, và `getchar()`.
- Thuật toán tìm kiếm tuyến tính (Linear Search) và sắp xếp (Selection/Bubble Sort).

## 🚀 Hướng dẫn Cài đặt & Chạy chương trình

**Yêu cầu:** Máy tính đã cài đặt trình biên dịch GCC (`gcc`) trên Linux/WSL2.

1. **Clone repository về máy:**
   ```bash
   git clone https://github.com/kimvun/Quan-Ly-Sinh-Vien-CLI.git
   cd Quan-Ly-Sinh-Vien-CLI