cmake_minimum_required(VERSION 3.19)
project(IMU_CS_ProfessionalMastersDegree_Coding)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructure Code/MatrixTranspose.cpp Code/MaxInMatrix.cpp Code/CalculateSquareRoot.cpp Code/InsertSort.cpp Code/SellSort.cpp Code/BubbleSort.cpp)
file (GLOB files *.cpp */*cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()