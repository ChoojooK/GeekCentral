**SMTP (Simple Mail Transfer Protocol)**  
- **Port**: 25 (Default), 587 (Submission), 465 (SMTPS)  
- **Description**: SMTP is a protocol used for sending emails between servers and clients. It handles the delivery of email messages from a sender to one or more recipients. SMTP is used by email clients and servers to transfer email messages over the Internet.

   **How It Works**:
   - **Sending Emails**: The client connects to the SMTP server, typically on port 25 (or 587/465 for secure connections). It sends commands to the server to initiate the sending process.
   - **Email Transmission**: The SMTP server forwards the email to the recipient’s mail server, using SMTP or other protocols for further delivery.
   - **Relay and Forwarding**: SMTP servers can relay emails to other servers and handle forwarding until the email reaches the recipient's inbox.

   **Key Points**:
   - **Not for Receiving**: SMTP is used only for sending emails. Receiving emails is handled by protocols like POP3 or IMAP.
   - **Authentication**: SMTP servers often require authentication (username and password) to prevent unauthorized use and spam.
   - **Encryption**: Port 587 is commonly used for encrypted email submissions (STARTTLS), while port 465 supports implicit TLS/SSL for secure email sending.

SMTP is critical for email communication, ensuring that messages are correctly routed from senders to recipients across the Internet.
