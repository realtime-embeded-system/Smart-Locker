# Smart-Locker
Smart lockers based on face recognition

The whole project has three main parts: 
     the software part for face recognition and UI design, and the hardware part for circuit design and box assembly.
# UI
UI part is completed by Yuyang Peng(2429326p)

The UI design is based on QT and needs to be ported to Linux and then downloaded to the display.

Please use the final version code 4.0 and configure the cross-compilation environment on the Raspberry Pi and port it.
The code detial explaination is in mian/UI.

# Hardware circuit design
Power supply design and testing in the overall peripheral circuit design, and use of GPIO ports is completed by Lintao Hu(2810636h)

Use an 8V power supply to reduce voltage and supply power to the Raspberry Pi and relay module, a 12V power supply to supply power to the latch, and the 24, 25, 27, and 28 IO ports of the Raspberry Pi generate 3.3V voltage to input signals to the four relay modules. The relay shares ground with the Raspberry Pi. When facial recognition is successful, the relay module operates and the 12V power supply begins to supply power to the locker.

# face recognition
The facial recognition function is based on the open-source face recognition engine "seeta" and combined with the QT page to achieve the following three functions:

1. Face recognition: Identify faces and output corresponding numbers or names.

2. Face login: Memorize the corresponding face and name.

3. Generation of face training models.

4. Face logout: Delete specific face data in the system.

# Face Detection Module

This repository contains the face detection module developed by Liu Jiarui as part of a collaborative GitHub project. The primary functionality of this module is to frame out faces from sampled photos.
笔记

