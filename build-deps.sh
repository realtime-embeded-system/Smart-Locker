#/bin/sh

cd  SeetaFaceEngine/FaceDetection && mkdir build && cd build && cmake .. && make && cp -r include/* /usr/local/include && cp *.so /usr/local/lib &&cd -&& cd ..
cd SeetaFaceEngine/FaceAlignment && mkdir build && cd build && cmake .. && make && cp -r include/* /usr/local/include && cp *.so /usr/local/lib && cd - && cd ..
cd SeetaFaceEngine/FaceIdentification && mkdir build && cd build&&cmake .. && make && cp -r include/* /usr/local/include && cp *.so /usr/local/lib  && cd  - && cd ..
