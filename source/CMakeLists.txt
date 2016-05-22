add_executable(tests tests.cpp)
add_executable(aufgabe1 aufgabe1.cpp)
add_executable(aufgabe2bis4 aufgabe2bis4.cpp)
add_executable(aufgabe5 aufgabe5.cpp)

target_link_libraries(tests framework ${LIBRARIES})


