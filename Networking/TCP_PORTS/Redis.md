**Redis**  
- **Port**: 6379  
- **Description**: Redis is an open-source, in-memory data structure store often used as a database, cache, and message broker. It supports various data types such as strings, hashes, lists, sets, and sorted sets, and is known for its high performance and flexibility.

   **How It Works**:
   - **Connection**: Clients connect to the Redis server on port 6379.
   - **Data Operations**: Redis stores data in-memory, allowing for fast read and write operations. Data can be accessed and manipulated using a variety of commands for different data structures.
   - **Persistence**: Redis offers persistence options, such as snapshots (RDB) and append-only files (AOF), to store data on disk and recover it after a restart.

   **Key Points**:
   - **In-Memory Storage**: Provides extremely fast access to data since all data is kept in RAM.
   - **Data Structures**: Supports advanced data structures and operations, including atomic operations, transactions, and pub/sub messaging.
   - **Replication and Clustering**: Supports master-slave replication and clustering for high availability and scalability.

Redis is widely used for applications that require fast data access, caching, real-time analytics, and messaging. Its versatility and performance make it a popular choice for many modern software architectures.
