# slave_motor

** Thiết bị sử dụng:
- Board Arduino Uno R3 + CNC Shiled V3
- Driver điều khiển step motor - A8825

** Xây dựng hệ thống:
* Slave - Arduino Uno R3 + CNC Shiled V3:
+ Sau khi nhận được tín hiệu phân loại rác bên nào, mạch sẽ tiến hành xử lý và điều khiển motor quay đúng bên để đưa rác vào thùng.
+ Sau khi kết thúc tiến trình sẽ phản hồi về ESP8266 để thông báo có thể bắt đầu tiến trình mới.

** Thư viện sử dụng:
+ AccelStepper
+ Wire

** IDE Platform: PlatformIO + Arduino IDE

** Hướng dẫn cài đặt:
- Đối với mạch Arduino Uno R3 + CNC Shield V3, tải code về, tải các thư viện phù hợp, sau đó tiến hành upload code, điều chỉnh dòng điện phù hợp với động cơ trên driver A8825.

** LƯU Ý:
- Khi upload code, tháo chân cắm SDA và SCL ra, sau khi code upload xong có thể cắm vào.
- Tiến hành kết nối động cơ với mạch trước rồi mới cấp nguồn cho CNC Shield V3.
