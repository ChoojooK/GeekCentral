import os

def delete_file(file_path):
    try:
        # Delete the file
        os.remove(file_path)
        print("File deleted successfully.")
    except FileNotFoundError:
        print("File not found.")
    except PermissionError:
        print("Permission denied when trying to delete the file.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
delete_file("file_to_delete.txt")
