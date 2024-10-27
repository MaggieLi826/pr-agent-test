# Open a file in read mode ('r') and handle it
file_path = '/usr/local/netsd/cdp.conf'

try:
    with open(file_path, 'r') as file:
        content = file.read()
        print(content)
except FileNotFoundError:
    print(f"The file {file_path} does not exist.")
except Exception as e:
    print(f"An error occurred: {e}")