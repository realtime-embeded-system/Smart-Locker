project(faceRecogniztion)

find_package(OpenCV REQUIRED)


find_package(Qt5 COMPONENTS Widgets  REQUIRED)
set(CMAKE_AUTOMOC ON)
qt5_add_resources(QRC images.qrc)
include_directories(include)
link_directories(lib)
# include_directories()

add_executable(${PROJECT_NAME}
            main.cpp 
            mainwindow.cpp 
            FaceRecognition.cpp 
            featuregroup.cpp 
            dlgfaceinput.cpp
            device.cpp
	        facerc.cpp )

target_link_libraries(${PROJECT_NAME}
            -lopencv_core 
            -lopencv_highgui 
            -lopencv_imgproc 
            -lpigpio
            -lseeta_facedet_lib
	        -lseeta_fa_lib
	        -lviplnet
	  
            Qt5::Widgets
            )       
