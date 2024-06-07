import json

# Import the config
def load_json(path)->dict:
    with open(path, "r") as f:
        data = json.load(f)
        return data

# Import world data
def load_world_json(data, world_name):
    return data["worlds"][world_name]

# Switch server.properties

# Create new world

# Load minecraft world

# Boot minecraft server

# Edit config

# Edit world specific config

# Main script
def Main():
    data = load_json("./mcserver-world-switcher-config.json")
    print(data)

# Start the program if this file is called
if __name__ == "__main__":
    Main()
