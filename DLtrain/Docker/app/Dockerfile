FROM appbuildforbbuntu:0.1.0 AS build

WORKDIR /src

COPY CMakeLists.txt network_prop.txt NewNetwork.dat hdr/MNISTRead.H srcTrain/CNN.cpp srcInfer/feedforward.cpp  srcInfer/matrix.cpp srcInfer/matrix.cpp  srcTrain/main.cpp srcInfer/MNISTRead.cpp   hdr/matrix.h  hdr/CNN.h Images/images-ubyte  Images/labels-ubyte  ./

RUN ls -d $PWD/*

RUN cmake . && make

FROM ubuntu:bionic

WORKDIR /opt/DLapp

COPY --from=build /src/dltrain ./
COPY --from=build  /src/network_prop.txt ./
RUN  mkdir -p Images
COPY --from=build  /src/images-ubyte  /opt/DLapp/Images/images-ubyte 
COPY --from=build  /src/labels-ubyte  /opt/DLapp/Images/labels-ubyte
COPY --from=build  /src/matrix.h  /opt/DLapp/Images/matrix.h
COPY --from=build  /src/NewNetwork.dat  /opt/DLapp/NewNetwork.dat
RUN ls -R


ENTRYPOINT ["./dltrain"]
CMD ["-m", "train", "-s", "NewNetwork.dat", "-c", "network_prop.txt", "-n", "2000", "-e", "3" ]

 
