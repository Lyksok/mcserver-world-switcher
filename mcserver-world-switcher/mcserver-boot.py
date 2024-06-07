import json

# Import the config
def load_json(path)->dict:
    with open(path, "r") as f:
        data = json.load(f)
        return data

# Switch server.properties

# Create new world

# Load minecraft world

# Boot minecraft server



# Main script
def Main():
    data = load_json("./mcserver-world-switcher-config.json")
    print(data)

# Start the program if this file is called
if __name__ == "__main__":
    Main()
