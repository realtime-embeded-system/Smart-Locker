#/bin/sh

cd  seetaFaceEngine/FaceDetection && mkdir build && cd build && cmake .. && make && cp -r include/* /usr/local/include && cp *.so /usr/local/lib &&cd -&& cd ..
cd seetaFaceEngine/FaceAlignment && mkdir build && cd build && cmake .. && make && cp -r include/* /usr/local/include && cp *.so /usr/local/lib && cd - && cd ..
cd seetaFaceEngine/FaceIdentification && mkdir build && cd build&&cmake .. && make && cp -r include/* /usr/local/include && cp *.so /usr/local/lib  && cd  - && cd ..
