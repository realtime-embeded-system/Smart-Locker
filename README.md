# Smart-Locker
Smart lockers based on face recognition

UI
The main function achieved by the UI is to provide a platform for the user to operate the system. The main functions are login and logout, face entry, face recognition, locker selection and switching lockers on and off.

The UI design interface is shown in the figure.

The three folders in the UI folder are: code, code 2.0, code 3.0.

code and code 2.0 only implement the functional UI design interface and do not communicate with the Raspberry Pi. The code is a Windows based QT program and needs to be cross-compiled to Linux before being ported to Raspberry Pi.

code 3.0 has implemented communication with Raspberry Pi and added d code to communicate with the Raspberry Pi port. This allows the UI interface to directly control the charging and discharging of the Raspberry Pi ports.

The cross-compilation process is implemented on the Raspberry Pi. A cross-compilation environment for QT needs to be set up on the Raspberry Pi first.
