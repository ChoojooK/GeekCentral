**SNMP (Simple Network Management Protocol)**  
- **Ports**: 161 (for requests), 162 (for traps)  
- **Description**: SNMP is a protocol used for managing devices on IP networks, such as routers, switches, servers, and other network hardware. It allows network administrators to monitor and manage network performance, detect network faults, and configure devices remotely.

   **How It Works**:
   - **SNMP Agent**: Each managed device runs an SNMP agent, which stores data about the device's status and performance in a Management Information Base (MIB).
   - **SNMP Manager**: A central system, known as the SNMP manager, sends requests to the agent (on port 161) to retrieve data or configure the device.
   - **SNMP Traps**: When certain events occur (such as errors or status changes), the agent can send unsolicited alerts called traps to the manager on port 162.

   **Key Points**:
   - **Polling**: SNMP managers regularly poll devices by sending requests to gather metrics like CPU usage, network traffic, or error rates.
   - **MIB**: The MIB is a structured database of information that defines what can be monitored or configured on the device.
   - **Security**: While earlier versions of SNMP lacked strong security, SNMPv3 includes encryption and authentication to secure communications.

SNMP is a key protocol for network management, providing real-time data and alerts that help administrators monitor and maintain the health of networked devices.
