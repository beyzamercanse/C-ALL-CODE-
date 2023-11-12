alphabet = "[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
key = " [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"

secret_message = input("Enter your secret message: ")

encrypted_message = ""
print("\nEncrypting message...")

for char in secret_message:
    position = alphabet.find(char)
    if position != -1:
        new_char = key[position]
        encrypted_message += new_char
    else:
        encrypted_message += char

print("\nEncrypted message:", encrypted_message)

decrypted_message = ""
print("\nDecrypting message...")

for char in encrypted_message:
    position = key.find(char)
    if position != -1:
        new_char = alphabet[position]
        decrypted_message += new_char
    else:
        decrypted_message += char

print("\nDecrypted message:", decrypted_message)
