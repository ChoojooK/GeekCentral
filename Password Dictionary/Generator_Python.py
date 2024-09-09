def generate_words(length):
    with open("output.txt", "w") as file:
        # Generate words of each length
        for i in range(1, length + 1):
            # Generate lowercase words of length i
            for j in range(26 ** i):
                word = ""
                for k in range(i):
                    word += chr(97 + (j // (26 ** k)) % 26)  # lowercase letters
                file.write(word + "\n")
                
            # Generate uppercase words of length i
            for j in range(26 ** i):
                word = ""
                for k in range(i):
                    word += chr(65 + (j // (26 ** k)) % 26)  # uppercase letters
                file.write(word + "\n")

def main():
    length = int(input("Enter the desired length of words: "))
    generate_words(length)
    print("Words generated and saved to 'output.txt'.")

if __name__ == "__main__":
    main()
