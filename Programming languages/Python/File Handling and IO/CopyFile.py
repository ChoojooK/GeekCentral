def copy_file(source_file, destination_file):
    try:
        # Open the source file for reading
        with open(source_file, 'rb') as source:
            # Read the contents of the source file
            contents = source.read()

        # Open the destination file for writing
        with open(destination_file, 'wb') as destination:
            # Write the contents to the destination file
            destination.write(contents)

        print("File copied successfully.")
    except FileNotFoundError:
        print("Source file not found.")
    except PermissionError:
        print("Permission denied when trying to copy the file.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
copy_file("source.txt", "destination.txt")
