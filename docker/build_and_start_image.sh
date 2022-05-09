#!/bin/bash

docker build -t test .

docker rm -f basic_environment 

docker run -it -v /Path/To/Host/GitHub:/home/developer/github  -d test --name basic_environment

