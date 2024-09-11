**NTP (Network Time Protocol)**  
- **Port**: 123  
- **Description**: NTP is a protocol used to synchronize the clocks of computers and network devices over a network. It ensures that devices on a network have the correct time, which is crucial for logging events, scheduling tasks, and coordinating activities.

   **How It Works**:
   - **Time Requests**: NTP clients send time synchronization requests to NTP servers on port 123. These requests are transmitted over UDP.
   - **Time Responses**: The NTP server responds with time information, including timestamps indicating when the request was received and when the response was sent.
   - **Clock Adjustment**: The client calculates the round-trip delay and adjusts its local clock accordingly to synchronize with the server's time.

   **Key Points**:
   - **Stratum Levels**: NTP servers are organized into a hierarchy of "stratum" levels, with stratum 0 being highly accurate time sources like atomic clocks, and stratum 1 servers directly synchronized with stratum 0 sources. Lower stratum levels are further away from the source.
   - **Accuracy**: NTP is designed to provide high precision time synchronization, often within milliseconds over local networks and within seconds over the internet.
   - **Synchronization**: NTP can adjust clocks gradually to avoid abrupt changes, ensuring smooth synchronization.

NTP is widely used for time synchronization across various devices and systems, playing a critical role in maintaining accurate and consistent time across networks.
