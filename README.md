
# my_robot_esp32_ros

## Description
`my_robot_esp32_ros` is a Platformio package designed for low-level control of a unicycle robot. This package uses an ESP32 board to control a DBH-12 motor controller and enables communication with a differential drive hardware interface (`hardware_interface`) from ROS2_control.

## Features
- **Microcontroller**: ESP32
- **Motor Controller**: DBH-12
- **Interface**: ROS2_control for differential drive systems
- **Robot Type**: Unicycle robot

## Functionality
- Motor control using commands sent from ROS 2.
- Integration with ROS2_control to ensure compatibility with the ROS 2 differential control stack.
- Real-time transmission of motor feedback and system states.

## Installation

1. **Install Platformio**:
   If you don't have Platformio installed yet, you can install it via the VSCode extension or using the command line:
   ```bash
   pip install platformio
   ```

2. **Clone the repository**:
   ```bash
   git clone <repository_link>
   cd my_robot_esp32_ros
   ```

3. **Configure and upload the firmware**:
   - Connect the ESP32 to your computer.
   - To compile and flash the firmware onto the ESP32, run:
   ```bash
   platformio run --target upload
   ```

## Usage
Once the firmware is installed on the ESP32, you can establish communication with ROS 2 by launching the ROS2_control node, which will manage the unicycle robot’s movement commands via the ROS interface.

## ROS2_control Configuration
To use this package with ROS 2, make sure you have configured a differential-type interface in your ROS2_control configuration file.

## Dependencies
- [Platformio](https://platformio.org/)
- [ESP32 Platform](https://docs.platformio.org/en/latest/platforms/espressif32.html)
- [ROS2_control](https://github.com/ros-controls/ros2_control)

## License
This project is licensed under the [MIT License](LICENSE).

## Contributors
- **Axel NIATO** - Lead Developer