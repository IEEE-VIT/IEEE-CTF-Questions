FROM ubuntu:16.04
RUN apt-get update && apt-get install -y socat && apt install -y python-minimal
WORKDIR /pyjail
COPY . /pyjail
RUN chmod +x run.sh
EXPOSE 6969
CMD ./run.sh
