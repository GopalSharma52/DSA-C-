import random
import string

# Ask user for password length
length = int(input("Enter the desired password length: "))

# Create a pool of characters (letters, digits, symbols)
characters = string.ascii_letters + string.digits + string.punctuation

# Generate random password
password = ''.join(random.choice(characters) for _ in range(length))

# Show the result
print("Generated Password:", password)
