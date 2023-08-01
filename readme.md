# Face Recognition System

## Project Description
This is the final version. The program mainly consists of three parts: QT interface, face recognition program, and interface calling program. The interactive interface implemented using QT, the Raspberry Pi GPIO called using pigpio, and the face recognition function based on the open source face recognition engine "seeta". The program implements the functions of face input, face recognition, and unlocking specific boxes based on the results of face recognition.

Note : Seeta_ fr_ The v1.0 file is too large to be directly uploaded to GitHub, so it is divided into six compressed files from part1 to part6. Before use, it should be decompressed first.

## Project Contributors
| Name | Role |
| ---- |  ---- |
| Zongyu Li (2812080l)  | Face train and Face predict module and gpio module |
| Yuyang Peng (2429326p)  | manage program process |
| Lintao Hu (2810636h)  | control device open module |
| Jiarui Liu (2828920l)  | Software Engineer |
## How to build
```lang=shell
mkdir build
cd build
make
mkdir images
sudo ./faceReconiton
```



## Face recognition process:

1. Open the main interface of the program.

2. Click the "open camera" button in the bottom left corner of the interface.

3. Aim your face at the camera, and when you hear a click, you can open the corresponding box.

## Face entry process:

1. Open the main interface of the program.

2. Click on the "login" button in the upper left corner.

3. Enter your name or number and aim your face at the camera

4. Click on the "input" button.

5. A prompt indicating successful entry will pop up.

6. Return to the main interface and click the "face model" button in the upper right corner. The program will automatically generate your face recognition model. It takes about 30 seconds.

7. Restart the program, and the program can now recognize your face.

## Vedio
https://www.youtube.com/watch?v=tpFT4W4TO1w
[![Watch the video](https://raw.github.com/GabLeRoux/WebMole/master/ressources/WebMole_Youtube_Video.png)](http://youtu.be/vt5fpE0bzSY)
