import shutil

def move_file(source_file, destination_file):
    try:
        # Move the file to the destination
        shutil.move(source_file, destination_file)
        print("File moved successfully.")
    except FileNotFoundError:
        print("Source file not found.")
    except PermissionError:
        print("Permission denied when trying to move the file.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
move_file("source.txt", "destination.txt")
