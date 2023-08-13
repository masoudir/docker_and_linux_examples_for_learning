# Example01 help

## How to build dockerfile

    docker build -t mytest:v1 .

    docker build -t mytest:v1 -f PATH/FILE
    docker build -t mytest:v1 --file PATH/FILE

### How to test

    docker run -it mytest:v1

## How to remove a container and then image

    docker container rm CONT_ID
    docker image rm IM_ID

    # For remove all stopped containers
    docker container prune

    # For remove all stopped images
    docker image prune    

## How to get new terminal from an openned container

    docker ps -a

    docker exec -it CONT_ID /bin/bash

    # To force the docker to execute a specific script after bringing up the terminal
    docker exec -it CONT_ID nano