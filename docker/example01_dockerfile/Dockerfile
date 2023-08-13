FROM ubuntu:22.04

RUN apt update

RUN apt install nano

COPY myscript.sh /bin/new_script.sh
COPY myscript2.sh /bin/new_script2.sh

# CMD /bin/new_script2.sh
CMD nano
