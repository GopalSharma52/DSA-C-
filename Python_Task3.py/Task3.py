import tkinter as tk
from tkinter import messagebox
import random
import string

def generate_password():
    try:
        length = int(length_entry.get())
        if length <= 0:
            raise ValueError

        characters = string.ascii_letters + string.digits + string.punctuation
        password = ''.join(random.choice(characters) for _ in range(length))
        password_display.delete(0, tk.END)
        password_display.insert(0, password)

    except ValueError:
        messagebox.showerror("Invalid Input", "Please enter a valid positive number.")

# Create GUI window
root = tk.Tk()
root.title("Password Generator")
root.geometry("400x180")
root.resizable(False, False)

# Title Label
title = tk.Label(root, text="Password Generator", font=("Helvetica", 16, "bold"))
title.pack(pady=10)

# Length input frame
frame = tk.Frame(root)
frame.pack(pady=5)

length_label = tk.Label(frame, text="Enter password length:")
length_label.pack(side=tk.LEFT)

length_entry = tk.Entry(frame, width=5)
length_entry.pack(side=tk.LEFT)

# Generate Button
generate_btn = tk.Button(root, text="Generate Password", command=generate_password)
generate_btn.pack(pady=10)

# Display password
password_display = tk.Entry(root, width=40, font=("Helvetica", 12))
password_display.pack(pady=5)

# Run the GUI
root.mainloop()
