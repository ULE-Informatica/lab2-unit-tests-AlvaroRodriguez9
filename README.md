# dps-laboratory2

Para hacer funcionar GTest se han seguido los pasos de estas dos páginas web: 

https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/

https://zwarrior.medium.com/install-google-test-framework-gtest-on-ubuntu-20-04-368eb6951b12
 
Los comandos utilizados han sido: 


`sudo apt-get install libgtest-dev`

`sudo apt-get install cmake`

`cd /usr/src/gtest`

`sudo cmake CMakeLists.txt`

`sudo make`

`sudo cp ./lib/libgtest*.a /usr/lib`


Para compilar y ejecutar los tests los comandos utilizados son: 

`cmake CMakeLists.txt`

`make`


`./runTests`

**OBSERVACIÓN:** No he podido hacer funcionar cmake y GTest en la última versión de Ubuntu. En cambio he podido hacerlo funcionar en Ubuntu 20.04.
