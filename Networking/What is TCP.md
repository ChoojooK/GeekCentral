# Understanding TCP (Transmission Control Protocol)

**TCP (Transmission Control Protocol)** is a key protocol in the Internet Protocol (IP) suite, often referred to as **TCP/IP**. It ensures reliable, ordered, and error-checked delivery of data between applications running on networked devices.

## Key Features of TCP:

1. **Connection-Oriented**  
   Before any data is sent, TCP establishes a connection between the sender and receiver, creating a virtual circuit. This ensures reliable communication.

2. **Reliable Data Transmission**  
   TCP guarantees that data arrives correctly and in the right order. It uses sequence numbers, acknowledgments, and retransmissions to make sure no data is lost or corrupted.

3. **Flow Control**  
   TCP prevents a fast sender from overwhelming a slower receiver by using a sliding window protocol to control the amount of data sent before getting an acknowledgment.

4. **Congestion Control**  
   To avoid network congestion, TCP adjusts the data transmission rate based on network conditions. Algorithms like slow start, congestion avoidance, and fast retransmit are used to ensure efficient use of bandwidth.

5. **Full-Duplex Communication**  
   TCP supports simultaneous data transmission in both directions, allowing for smooth two-way communication.

6. **Three-Way Handshake**  
   TCP uses a three-step process (SYN, SYN-ACK, ACK) to establish a connection and sync sequence numbers between the sender and receiver before transmitting data.

7. **Graceful Connection Termination**  
   When ending a connection, TCP uses a four-way handshake (FIN, FIN-ACK, ACK) to ensure both parties agree to terminate the session cleanly.

## Why TCP?

TCP is widely used for applications where reliable communication is critical, like:
- Web browsing (HTTP/HTTPS)
- Email (SMTP)
- File transfers (FTP)
- Remote administration (SSH, Telnet)

While TCP ensures data integrity and reliability, it comes with more overhead than **UDP (User Datagram Protocol)**, which is faster but doesn't guarantee delivery or order.
